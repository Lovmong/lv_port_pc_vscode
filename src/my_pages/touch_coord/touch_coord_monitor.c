#include "touch_coord_monitor.h"
#include <stdio.h> // 用于格式化字符串

lv_obj_t *label = NULL;
lv_indev_t *mouse_indev = NULL;
lv_point_t point;
lv_point_t last_pos;

void touch_coord_monitor_update()
{
    SDL_GetMouseState(&point.x, &point.y);
    if (point.x != last_pos.x || point.y != last_pos.y)
    {
        last_pos = point;
        lv_label_set_text_fmt(label, "(%d, %d)", point.x, point.y);
        printf("Mouse coordinates: (%d, %d)\n", point.x, point.y);
    }
}

void touch_coord_monitor_create()
{
    lv_obj_t *container = lv_obj_create(lv_scr_act());
    lv_obj_set_size(container, 80, 20);
    lv_obj_align(container, LV_ALIGN_BOTTOM_RIGHT, 0, 0);

    // 背景透明度
    lv_obj_set_style_bg_opa(container, LV_OPA_0, 0);
    // 无边框
    lv_obj_set_style_border_width(container, 0, 0);
    // 禁止滚动
    lv_obj_set_scrollbar_mode(container, LV_SCROLLBAR_MODE_OFF);

    label = lv_label_create(container);
    lv_label_set_text_fmt(label, "(%d, %d)", 0, 0);
    lv_obj_center(label);
    // 字体颜色
    lv_obj_set_style_text_color(label, lv_color_hex(0x00FF00), 0);

    //
    mouse_indev = lv_indev_get_next(NULL);

    // 定时器
    lv_timer_create(touch_coord_monitor_update, 200, NULL);
}