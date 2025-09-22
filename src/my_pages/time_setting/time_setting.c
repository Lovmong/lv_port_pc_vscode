#include "time_setting.h"
#include <stdio.h> // 用于格式化字符串

lv_obj_t *time_setting_page;
lv_obj_t *last_screen;
lv_timer_t *destroy_timer = NULL;

void destroy_time_setting_page(lv_timer_t *timer)
{
    // 销毁页面
    if (time_setting_page != NULL)
    {
        printf("destroy_time_setting_page !!!!!!!!!!!!!!!!!!!!!!!!!\n");
        lv_obj_del(time_setting_page);
        time_setting_page = NULL;
    }

    // 销毁定时器
    lv_timer_del(destroy_timer);
    destroy_timer = NULL;
}

void back_button_event_handler(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);

    if (code == LV_EVENT_CLICKED)
    {
        // 启动10秒后销毁page2的定时器
        destroy_timer = lv_timer_create(destroy_time_setting_page, 10000, NULL);

        // 返回上一页 (隐藏time_setting_page)
        lv_obj_add_flag(time_setting_page, LV_OBJ_FLAG_HIDDEN);
    }
}

void time_setting_page_create()
{
    lv_obj_set_size(time_setting_page, LV_PCT(100), LV_PCT(100));

    // 声明字体
    LV_FONT_DECLARE(misans_regular_gb2312_24);

    // back button
    lv_obj_t *back_button = lv_button_create(time_setting_page);

    lv_obj_add_event_cb(back_button, back_button_event_handler, LV_EVENT_ALL, NULL);
    lv_obj_align(back_button, LV_ALIGN_TOP_LEFT, 10, 10);
    // 设置大小圆角
    lv_obj_set_size(back_button, 40, 40);
    lv_obj_set_style_radius(back_button, 20, 0);
    lv_obj_remove_flag(back_button, LV_OBJ_FLAG_PRESS_LOCK);

    lv_obj_t *back_label = lv_label_create(back_button);
    lv_label_set_text(back_label, "<");
    lv_obj_center(back_label);

    // 标题
    lv_obj_t *title = lv_label_create(time_setting_page);
    lv_obj_set_style_text_font(title, &misans_regular_gb2312_24, 0);
    lv_label_set_text(title, "时间和日期");
    // 位置
    lv_obj_align(title, LV_ALIGN_TOP_MID, 0, 0);

    printf("time_setting_page_create\n");
}

void jump_time_setting_page(lv_obj_t *parent)
{
    // 停止销毁定时器
    if (destroy_timer != NULL)
    {
        lv_timer_del(destroy_timer);
        destroy_timer = NULL;
    }

    printf("cjhfhqjhwfhwqjkfhwkjjny\n");

    if (time_setting_page == NULL)
    {
        // 创建一个新的page
        time_setting_page = lv_obj_create(parent);
        // // 创建页面
        time_setting_page_create();
    }

    // 显示或隐藏page
    lv_obj_clear_flag(time_setting_page, LV_OBJ_FLAG_HIDDEN);
}
