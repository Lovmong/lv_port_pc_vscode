#include "my_clock.h"
#include <time.h>  // 用于时间函数
#include <stdio.h> // for printf

#define CLOCK_TXT_CONTAINER_WIDTH 300
#define CLOCK_TXT_CONTAINER_HEIGHT 180

lv_obj_t *clock_container;

lv_obj_t *time_label;
lv_obj_t *date_label;
lv_obj_t *week_label;

lv_color_t time_color = {0xff, 0xff, 0xff};

void update_time(lv_timer_t *timer)
{
    time_t now;
    struct tm timeinfo;

    // 获取当前时间
    time(&now);
    localtime_r(&now, &timeinfo); // 转换为本地时间

    // 格式化时间字符串 (HH:MM:SS)
    char time_str[9];
    // strftime(time_str, sizeof(time_str), "%H:%M:%S", &timeinfo);
    strftime(time_str, sizeof(time_str), "%M:%S", &timeinfo);

    // 如果当前屏幕活跃，更新标签显示

    lv_label_set_text(time_label, time_str);
}

void clock_event_cb(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);

    printf("clock_event_cb: %d\n", code);

    if (code == LV_EVENT_LONG_PRESSED)
    {
        printf("clock Long pressedyyyyyyyyyyyyy\n");

        // 跳转到时间设置页面
        jump_time_setting_page(clock_container);
    }
}

void create_clock_txt(lv_obj_t *parent)
{
    // 声明字体
    LV_FONT_DECLARE(misans_regular_gb2312_24);
    LV_FONT_DECLARE(misans_bold_clock_42);
    LV_FONT_DECLARE(misans_bold_clock_100);

    // 同意设置字体和字体颜色
    lv_obj_set_style_text_color(parent, lv_color_hex(0xffffff), 0);

    /* !!!!!
    由于未设置text时，默认值为 "Text"，字体未包含相应字符时会渲染出错，
    所以需要先设置 text，再设置字体
    */

    // 时间标签
    time_label = lv_label_create(parent);
    lv_label_set_text(time_label, "00:00");
    // 字体/大小
    lv_obj_set_style_text_font(time_label, &misans_bold_clock_100, 0);
    // 位置
    lv_obj_align(time_label, LV_ALIGN_TOP_MID, 0, 4);

    // bg color
    lv_obj_set_style_bg_color(time_label, lv_color_hex(0x012300), 0);

    // 日期标签
    date_label = lv_label_create(parent);
    lv_label_set_text(date_label, "09/20");
    lv_obj_set_style_text_font(date_label, &misans_bold_clock_42, 0);
    lv_obj_align_to(date_label, time_label, LV_ALIGN_OUT_BOTTOM_RIGHT, -20, 20);

    lv_obj_set_style_bg_color(date_label, lv_color_hex(0x012300), 0);

    // 星期标签
    week_label = lv_label_create(parent);
    lv_label_set_text(week_label, "周六");
    lv_obj_set_style_text_font(week_label, &misans_regular_gb2312_24, 0);
    lv_obj_align_to(week_label, date_label, LV_ALIGN_OUT_BOTTOM_RIGHT, 0, 10);

    lv_obj_set_style_bg_color(week_label, lv_color_hex(0x012300), 0);

    // 创建定时器，每秒更新一次时间
    lv_timer_create(update_time, 1000, NULL);

    // 立即更新一次时间
    update_time(NULL);

    // const char text[] = "0123456789:"; // 自动包含终止符'\0'，长度为12
    // int32_t width = 0;
    // for (size_t i = 0; i < 11; i++)
    // {
    //     char c_str[2] = {text[i], '\0'}; // 将字符转换为字符串
    //     width = lv_txt_get_width(c_str, 1, &misans_bold_clock_100, 0);
    //     printf("width %c: %d\n", text[i], width);
    // }

    // 启用点击事件
    lv_obj_add_flag(time_label, LV_OBJ_FLAG_CLICKABLE); // 设置为可点击
    lv_obj_add_flag(date_label, LV_OBJ_FLAG_CLICKABLE); // 设置为可点击
    lv_obj_add_flag(week_label, LV_OBJ_FLAG_CLICKABLE); // 设置为可点击

    // 添加事件回调
    lv_obj_add_event_cb(time_label, clock_event_cb, LV_EVENT_LONG_PRESSED, NULL);
    lv_obj_add_event_cb(date_label, clock_event_cb, LV_EVENT_LONG_PRESSED, NULL);
    lv_obj_add_event_cb(week_label, clock_event_cb, LV_EVENT_LONG_PRESSED, NULL);
}

void bg_img_event_cb(lv_event_t *e)
{
    lv_obj_t *obj = lv_event_get_target(e);
    lv_event_code_t code = lv_event_get_code(e);

    printf("bg_img_event_cb: %d\n", code);

    if (code == LV_EVENT_CLICKED)
    {
        printf("Clickedxxxxxxxxxxxxxxx\n");
    }
    else if (code == LV_EVENT_LONG_PRESSED)
    {
        printf("Long pressedxxxxxxxxxxxxxxx\n");
    }
    else if (code == LV_EVENT_DOUBLE_CLICKED)
    {
        printf("Double clickedxxxxxxxxxxxxxxx\n");
    }
}

void create_clock_page(lv_obj_t *parent)
{
    // 跳转到时间设置页面
    // clock_container
    clock_container = lv_obj_create(parent);
    lv_obj_set_size(clock_container, LV_PCT(100), LV_PCT(100));

    lv_obj_set_style_bg_color(clock_container, lv_color_hex(0xff0000), 0);

    lv_obj_set_style_margin_all(clock_container, 0, 0);
    lv_obj_set_style_pad_all(clock_container, 0, 0);
    lv_obj_set_style_radius(clock_container, 0, 0);
    // 无边框
    lv_obj_set_style_border_width(clock_container, 0, 0);
    // 无阴影

    // bg img
    lv_obj_t *bg_img = lv_img_create(clock_container);
    lv_obj_set_size(bg_img, LV_PCT(100), LV_PCT(100));

    lv_obj_set_style_margin_all(bg_img, 0, 0);
    lv_obj_set_style_pad_all(bg_img, 0, 0);
    lv_obj_set_style_radius(bg_img, 0, 0);
    // 无边框
    lv_obj_set_style_border_width(bg_img, 0, 0);
    // 无阴影
    lv_obj_set_style_shadow_width(bg_img, 0, 0);

    LV_IMAGE_DECLARE(yy);
    lv_img_set_src(bg_img, &yy);
    // lv_img_set_src(bg_img, "clock_bg.png");
    // bg_color

    // clock
    lv_obj_t *clock_txt_container = lv_obj_create(clock_container);
    lv_obj_set_size(clock_txt_container, CLOCK_TXT_CONTAINER_WIDTH, CLOCK_TXT_CONTAINER_HEIGHT);
    // 位置
    lv_obj_align(clock_txt_container, LV_ALIGN_TOP_RIGHT, -20, 20);
    // lv_obj_set_style_bg_color(clock_txt_container, lv_color_hex(0x012300), 0);
    // 背景透明
    lv_obj_set_style_bg_opa(clock_txt_container, LV_OPA_TRANSP, 0);
    // 无边框
    lv_obj_set_style_border_width(clock_txt_container, 0, 0);
    // 无阴影
    lv_obj_set_style_shadow_width(clock_txt_container, 0, 0);
    // margin 和 padding 为 0
    lv_obj_set_style_margin_all(clock_txt_container, 0, 0);
    lv_obj_set_style_pad_all(clock_txt_container, 0, 0);

    create_clock_txt(clock_txt_container);

    lv_obj_add_flag(clock_container, LV_OBJ_FLAG_CLICKABLE); // 设置为可点击
    lv_obj_add_event_cb(clock_container, bg_img_event_cb, LV_EVENT_CLICKED, NULL);
    lv_obj_add_event_cb(clock_container, bg_img_event_cb, LV_EVENT_LONG_PRESSED, NULL);
    lv_obj_add_event_cb(clock_container, bg_img_event_cb, LV_EVENT_DOUBLE_CLICKED, NULL);

    // 禁用 clock_txt_container 的点击事件，让事件穿透到下层
    lv_obj_clear_flag(clock_txt_container, LV_OBJ_FLAG_CLICKABLE);
}
