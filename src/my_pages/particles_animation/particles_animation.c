#include "particles_animation.h"
#include <stdio.h>  // for printf
#include <stdlib.h> // for malloc
#include <math.h>

#ifndef DEG_TO_RAD
#define DEG_TO_RAD (M_PI / 180.0f)
#endif

float constrain(float value, float min_val, float max_val)
{
    if (value < min_val)
    {
        return min_val;
    }
    else if (value > max_val)
    {
        return max_val;
    }
    else
    {
        return value;
    }
}

// void create_particles_animation(lv_obj_t *parent)
// {
//     /*Create a buffer for the canvas*/
//     // LV_DRAW_BUF_DEFINE_STATIC(draw_buf, width, height, LV_COLOR_FORMAT_ARGB8888);
//     // LV_DRAW_BUF_INIT_STATIC(draw_buf);

//     /* !!!
//     lv_obj_get_width(parent) 可能获取到的是0，因为parent布局未完成更新
//     */

//     lv_draw_buf_t *draw_buf;
//     // draw_buf = lv_draw_buf_create(lv_obj_get_width(parent), lv_obj_get_height(parent), LV_COLOR_FORMAT_RGB888, 0);
//     draw_buf = lv_draw_buf_create(LV_HOR_RES, LV_VER_RES, LV_COLOR_FORMAT_RGB888, 0);

//     if (!draw_buf)
//     {
//         printf("创建绘图缓冲区失败！\n");
//         return;
//     }

//     /*Create a canvas and initialize its palette*/
//     lv_obj_t *canvas = lv_canvas_create(parent);
//     lv_canvas_set_draw_buf(canvas, draw_buf);
//     lv_canvas_fill_bg(canvas, lv_color_hex3(0xccc), LV_OPA_COVER);
//     lv_obj_center(canvas);

//     lv_layer_t layer;
//     lv_canvas_init_layer(canvas, &layer);

//     lv_draw_arc_dsc_t dsc;
//     lv_draw_arc_dsc_init(&dsc);
//     dsc.color = lv_palette_main(LV_PALETTE_RED);
//     dsc.center.x = 25;
//     dsc.center.y = 25;
//     dsc.width = 15;
//     dsc.radius = 15;
//     dsc.start_angle = 0;
//     dsc.end_angle = 360;

//     lv_draw_arc(&layer, &dsc);

//     lv_canvas_finish_layer(canvas, &layer);
// }

typedef struct
{
    lv_obj_t *dot;
    uint32_t x, y;
    float vx, vy;
    float angle;
    float baseSpeed;
} Particle;

Particle *particles[DEFAULT_PARTICLE_COUNT];

void update_particles(lv_timer_t *timer)
{
    for (int i = 0; i < DEFAULT_PARTICLE_COUNT; i++)
    {
        bool is_edge = false;
        // 更新位置
        particles[i]->x += particles[i]->vx;
        particles[i]->y += particles[i]->vy;

        // 边界检测和反弹
        if (particles[i]->x < DEFAULT_PARTICLE_RADIUS || particles[i]->x > LV_HOR_RES - DEFAULT_PARTICLE_RADIUS)
        {
            is_edge = true;
            particles[i]->angle = M_PI - particles[i]->angle;
            particles[i]->x = constrain(particles[i]->x, DEFAULT_PARTICLE_RADIUS + 0.5f, LV_HOR_RES - DEFAULT_PARTICLE_RADIUS - 0.5f);
            particles[i]->vx = -particles[i]->vx;
        }
        if (particles[i]->y < DEFAULT_PARTICLE_RADIUS || particles[i]->y > LV_VER_RES - DEFAULT_PARTICLE_RADIUS)
        {
            is_edge = true;
            particles[i]->angle = -particles[i]->angle;
            particles[i]->y = constrain(particles[i]->y, DEFAULT_PARTICLE_RADIUS + 0.5f, LV_VER_RES - DEFAULT_PARTICLE_RADIUS - 0.5f);
            particles[i]->vy = -particles[i]->vy;
        }
        if (is_edge)
        {
            // 随机颜色
            lv_obj_set_style_bg_color(particles[i]->dot, lv_color_hex3(lv_rand(0x222, 0xfff)), 0);
        }
        lv_obj_set_pos(particles[i]->dot, particles[i]->x, particles[i]->y);
    }
}

void create_particles_animation(lv_obj_t *parent)
{
    // 父级 无边框，无阴影
    lv_obj_set_style_border_width(parent, 0, 0);
    lv_obj_set_style_shadow_width(parent, 0, 0);

    lv_obj_set_style_margin_all(parent, 0, 0);
    lv_obj_set_style_pad_all(parent, 0, 0);
    // 禁用滚动条
    // lv_obj_set_scrollbar_mode(parent, LV_SCROLLBAR_MODE_OFF);

    // container
    lv_obj_t *container = lv_obj_create(parent);
    // lv_obj_set_size(container, LV_PCT(100), LV_PCT(100));
    lv_obj_set_size(container, LV_HOR_RES, LV_VER_RES);
    lv_obj_center(container);
    // bg color
    lv_obj_set_style_bg_color(container, lv_color_hex3(0x000000), 0);
    // 无边框，无阴影
    lv_obj_set_style_border_width(container, 0, 0);
    lv_obj_set_style_shadow_width(container, 0, 0);
    //
    lv_obj_set_style_margin_all(container, 0, 0);
    lv_obj_set_style_pad_all(container, 0, 0);
    lv_obj_set_style_radius(container, 0, 0);

    for (int i = 0; i < DEFAULT_PARTICLE_COUNT; i++)
    {

        Particle *p = (Particle *)malloc(sizeof(Particle));
        if (p == NULL)
        {
            // 内存分配失败处理
            printf("Failed to allocate memory for particle %d\n", i);
            continue;
        }
        particles[i] = p;

        particles[i]->dot = lv_button_create(container);
        uint8_t radius = DEFAULT_PARTICLE_RADIUS;
        // uint8_t radius = 10;

        lv_obj_set_size(particles[i]->dot, radius, radius);
        lv_obj_set_style_radius(particles[i]->dot, radius, 0);
        // 无边框
        lv_obj_set_style_border_width(particles[i]->dot, 0, 0);
        // margin=0, padding=0
        lv_obj_set_style_margin_all(particles[i]->dot, 0, 0);
        lv_obj_set_style_pad_all(particles[i]->dot, 0, 0);
        // 无阴影
        lv_obj_set_style_shadow_width(particles[i]->dot, 0, 0);
        // 随机位置
        particles[i]->x = lv_rand(radius, LV_HOR_RES - radius);
        particles[i]->y = lv_rand(radius, LV_VER_RES - radius);
        lv_obj_set_pos(particles[i]->dot, particles[i]->x, particles[i]->y);
        // 随机颜色
        lv_obj_set_style_bg_color(particles[i]->dot, lv_color_hex3(lv_rand(0x222, 0xfff)), 0);
        // 随机角度
        particles[i]->angle = lv_rand(0, 360) * DEG_TO_RAD;
        // 随机速度
        particles[i]->baseSpeed = 0.5 + lv_rand(0, 30) / 10.0;
        particles[i]->vx = particles[i]->baseSpeed * cos(particles[i]->angle) * DEFAULT_PARTICLE_SPEED;
        particles[i]->vy = particles[i]->baseSpeed * sin(particles[i]->angle) * DEFAULT_PARTICLE_SPEED;
    }

    // 定时器更新位置
    lv_timer_t *timer = lv_timer_create(update_particles, 33, NULL);
}
