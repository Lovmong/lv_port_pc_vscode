#include "my_page.h"
#include <stdio.h> // for printf

#include "clock/my_clock.h"
#include "particles_animation/particles_animation.h"

/**********************
 *  GLOBAL VARIABLES
 **********************/
#define TAB_COUNT 3

lv_obj_t *pages_container;
lv_obj_t *_tabview;
lv_obj_t *_dots_container;

lv_obj_t *dots[TAB_COUNT];

uint32_t current_page_index = 0;

void win1_create(lv_obj_t *parent)
{
    create_clock_page(parent);

    // lv_obj_t *panel1 = lv_obj_create(parent);
    // // lv_obj_set_size(panel1, LV_HOR_RES, LV_VER_RES);
    // lv_obj_set_size(panel1, LV_PCT(100), LV_PCT(100));

    // lv_obj_set_style_margin_all(panel1, 0, 0);
    // lv_obj_set_style_pad_all(panel1, 0, 0);
    // lv_obj_set_style_radius(panel1, 0, 0);
    // lv_obj_set_style_border_opa(panel1, LV_OPA_TRANSP, 0);
    // lv_obj_set_style_shadow_opa(panel1, LV_OPA_TRANSP, 0);
    // // bgcolor
    // lv_obj_set_style_bg_color(panel1, lv_color_hex(0xff0000), 0);
}

void win2_create(lv_obj_t *parent)
{
    lv_obj_t *panel2 = lv_obj_create(parent);
    // lv_obj_set_size(panel2, LV_HOR_RES, LV_VER_RES);
    lv_obj_set_size(panel2, LV_PCT(100), LV_PCT(100));

    lv_obj_set_style_margin_all(panel2, 0, 0);
    lv_obj_set_style_pad_all(panel2, 0, 0);
    lv_obj_set_style_radius(panel2, 0, 0);
    lv_obj_set_style_border_opa(panel2, LV_OPA_TRANSP, 0);
    lv_obj_set_style_shadow_opa(panel2, LV_OPA_TRANSP, 0);

    // bgcolor
    lv_obj_set_style_bg_color(panel2, lv_color_hex(0x00ff00), 0);

    //
    create_particles_animation(panel2);
}

void win3_create(lv_obj_t *parent)
{
    lv_obj_t *panel3 = lv_obj_create(parent);
    // lv_obj_set_size(panel3, LV_HOR_RES, LV_VER_RES);
    lv_obj_set_size(panel3, LV_PCT(100), LV_PCT(100));

    lv_obj_set_style_margin_all(panel3, 0, 0);
    lv_obj_set_style_pad_all(panel3, 0, 0);
    lv_obj_set_style_radius(panel3, 0, 0);
    lv_obj_set_style_border_opa(panel3, LV_OPA_TRANSP, 0);
    lv_obj_set_style_shadow_opa(panel3, LV_OPA_TRANSP, 0);

    // bgcolor
    lv_obj_set_style_bg_color(panel3, lv_color_hex(0x0000ff), 0);
}

void dots_create(lv_obj_t *parent)
{
    // for (int i = 0; i < TAB_COUNT; i++)
    // {
    //     lv_obj_t *dot = lv_obj_create(parent);
    //     lv_obj_align(dot, LV_ALIGN_CENTER, -20 + i * 20, 0);
    //     lv_obj_set_size(dot, 10, 10);
    //     lv_obj_set_style_radius(dot, 5, 0);
    //     // 黄色
    //     lv_obj_set_style_bg_color(dot, lv_color_hex(0xffff00), 0);
    // }

    current_page_index = 0;
    for (int i = 0; i < TAB_COUNT; i++)
    {
        dots[i] = lv_obj_create(parent);
        lv_obj_align(dots[i], LV_ALIGN_CENTER, -20 + i * 20, 0);
        lv_obj_set_size(dots[i], 10, 10);
        lv_obj_set_style_radius(dots[i], 5, 0);
        // 透明度 50%
        lv_obj_set_style_bg_color(dots[i], lv_color_hex(0xffffff), 0);
        lv_obj_set_style_bg_opa(dots[i], LV_OPA_50, 0);
        // 隐藏边框
        lv_obj_set_style_border_opa(dots[i], LV_OPA_TRANSP, 0);
        lv_obj_set_style_shadow_opa(dots[i], LV_OPA_TRANSP, 0);
    }
    // 当前页对于的点设置为不透明
    lv_obj_set_style_bg_opa(dots[current_page_index], LV_OPA_100, 0);
}

// tabview 切换时调用
void tabview_event_cb(lv_event_t *e)
{
    lv_obj_t *tabview = lv_event_get_target(e);
    lv_event_code_t code = lv_event_get_code(e); // 获取事件代码
    uint32_t _active_index = lv_tabview_get_tab_act(tabview);

    // // 打印code
    // printf("code: %d\n", code);

    // 页面切换时，更新dots
    if (code == LV_EVENT_VALUE_CHANGED)
    {
        // 原来的点设置为透明度 50%
        lv_obj_set_style_bg_opa(dots[current_page_index], LV_OPA_50, 0);
        current_page_index = _active_index;
        // 当前页对于的点设置为不透明
        lv_obj_set_style_bg_opa(dots[current_page_index], LV_OPA_100, 0);
    }
}

void tab3_event_cb(lv_event_t *e)
{
    lv_obj_t *tab3 = lv_event_get_target(e);
    lv_event_code_t code = lv_event_get_code(e); // 获取事件代码

    // 打印code
    printf("code3: %d\n", code);

    // 长按
    if (code == LV_EVENT_LONG_PRESSED)
    {
        printf("long pressedxxxxxxxxxxxxxxx\n");
    }
}

void create_pages(lv_obj_t *parent)
{
    lv_obj_t *tab1 = lv_tabview_add_tab(_tabview, "Tab 1");
    lv_obj_t *tab2 = lv_tabview_add_tab(_tabview, "Tab 2");
    lv_obj_t *tab3 = lv_tabview_add_tab(_tabview, "Tab 3");

    lv_obj_set_style_margin_all(tab1, 0, 0);
    lv_obj_set_style_pad_all(tab1, 0, 0);
    lv_obj_set_style_margin_all(tab2, 0, 0);
    lv_obj_set_style_pad_all(tab2, 0, 0);
    lv_obj_set_style_margin_all(tab3, 0, 0);
    lv_obj_set_style_pad_all(tab3, 0, 0);

    win1_create(tab1);
    win2_create(tab2);
    win3_create(tab3);
}

void my_pages_test(void)
{
    // --- pages_container ---
    pages_container = lv_obj_create(lv_screen_active());
    lv_obj_set_style_bg_color(pages_container, lv_color_hex(0x005111), 0);
    lv_obj_set_size(pages_container, LV_HOR_RES, LV_VER_RES);
    // margin = 0， padding = 0
    lv_obj_set_style_margin_all(pages_container, 0, 0);
    lv_obj_set_style_pad_all(pages_container, 0, 0);
    // 无边框， 无阴影
    lv_obj_set_style_border_width(pages_container, 0, 0);
    lv_obj_set_style_shadow_width(pages_container, 0, 0);

    // 隐藏滑动条
    lv_obj_set_scrollbar_mode(pages_container, LV_SCROLLBAR_MODE_OFF);

    // --- tabview ---
    _tabview = lv_tabview_create(pages_container);
    lv_obj_set_size(pages_container, LV_PCT(100), LV_PCT(100));
    lv_obj_set_style_bg_color(_tabview, lv_color_hex(0x0c0c0c), 0);
    // tabview bar 位置设置为底部
    lv_tabview_set_tab_bar_position(_tabview, LV_DIR_BOTTOM);
    // tabview bar 高度设置为0
    lv_tabview_set_tab_bar_size(_tabview, 0);

    // lv_obj_set_scrollbar_mode(pages_container, LV_SCROLLBAR_MODE_OFF);
    // margin = 0， padding = 0
    lv_obj_set_style_margin_all(_tabview, 0, 0);
    lv_obj_set_style_pad_all(_tabview, 0, 0);

    // --- tabview -> pages ---
    create_pages(_tabview);

    // --- dots_container ---
    _dots_container = lv_obj_create(pages_container);
    lv_obj_set_size(_dots_container, LV_HOR_RES, 10);
    lv_obj_align(_dots_container, LV_ALIGN_BOTTOM_MID, 0, -5);
    // 背景透明度0
    lv_obj_set_style_bg_opa(_dots_container, LV_OPA_0, 0);
    // 隐藏box-border, box-shadow
    lv_obj_set_style_border_opa(_dots_container, LV_OPA_TRANSP, 0);
    lv_obj_set_style_shadow_opa(_dots_container, LV_OPA_TRANSP, 0);

    // --- dots_container -> dots ---
    dots_create(_dots_container);

    // --- tabview event ---
    lv_obj_add_event_cb(_tabview, tabview_event_cb, LV_EVENT_VALUE_CHANGED, NULL);

    // lv_obj_add_event_cb(_tabview, tabview_event_cb, LV_EVENT_ALL, NULL);

    // lv_obj_add_event_cb(lv_tabview_get_content(_tabview), tabview_event_cb, LV_EVENT_GESTURE, NULL);
    // lv_obj_add_event_cb(lv_tabview_get_content(_tabview), tabview_event_cb, LV_EVENT_SCROLL, NULL);
    // lv_obj_add_event_cb(lv_tabview_get_content(_tabview), tabview_event_cb, LV_EVENT_SCROLL_END, NULL);

    //     lv_obj_add_event_cb(_tabview, tabview_event_cb, LV_EVENT_VALUE_CHANGED, NULL);
    //     lv_obj_add_event_cb(_tabview, tabview_event_cb, LV_EVENT_SCROLL, NULL);
    //     lv_obj_add_event_cb(_tabview, tabview_event_cb, LV_EVENT_SCROLL_END, NULL);
}
