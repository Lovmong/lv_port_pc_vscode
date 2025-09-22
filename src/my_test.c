#include "my_test.h"

void arc_example(void)
{

    lv_obj_t *screen = lv_screen_active();
    // lv_obj_set_style_bg_color(screen, lv_color_hex(0xff00ff), LV_PART_KNOB);

    static const lv_color_t grad_colors[2] = {
        LV_COLOR_MAKE(0x69, 0xeb, 0x95),
        LV_COLOR_MAKE(0x55, 0xbc, 0xbe),
    };
    static const lv_opa_t grad_opa[2] = {
        LV_OPA_COVER,
        LV_OPA_COVER,
    };

    static lv_style_t screen_style;
    lv_style_init(&screen_style);
    // 设置背景色

    static lv_grad_dsc_t grad;
    // lv_grad_init_stops(&grad, grad_colors, grad_opa, NULL, sizeof(grad_colors) / sizeof(lv_color_t));
    // lv_grad_linear_init(&grad, 0, 0, 410, 502, LV_GRAD_EXTEND_PAD);
    lv_grad_linear_init(&grad, 0, 0, 410, 502, LV_GRAD_EXTEND_PAD);

    lv_grad_init_stops(&grad, grad_colors, grad_opa, NULL, sizeof(grad_colors) / sizeof(lv_color_t));

    // lv_style_set_bg_grad_dir(&screen_style, LV_GRAD_DIR_LINEAR);
    lv_style_set_bg_grad(&screen_style, &grad);

    // lv_style_set_bg_color(&screen_style, lv_color_hex(0x69eb95));
    // lv_style_set_bg_grad_color(&screen_style, lv_color_hex(0x55bcbe));
    // lv_style_set_bg_grad_dir(&screen_style, LV_GRAD_DIR_HOR);
    // lv_style_set_bg_main_stop(&screen_style, 0);
    // lv_style_set_bg_grad_stop(&screen_style, 255);

    lv_style_set_bg_opa(&screen_style, LV_OPA_100); // 设置背景不透明度（100%）
    // 将样式应用到屏幕
    lv_obj_add_style(screen, &screen_style, LV_PART_MAIN);

    static lv_subject_t value;
    lv_subject_init_int(&value, 30);

    lv_obj_t *arc = lv_arc_create(lv_screen_active());
    lv_obj_set_size(arc, 200, 200);
    lv_obj_center(arc);
    lv_arc_bind_value(arc, &value);

    lv_obj_set_style_arc_opa(arc, LV_OPA_50, LV_PART_MAIN);
    lv_obj_set_style_arc_color(arc, lv_color_hex(0xffffff), LV_PART_INDICATOR);
    lv_obj_set_style_bg_color(arc, lv_color_hex(0xffffff), LV_PART_KNOB);
    lv_obj_set_style_shadow_width(arc, 15, LV_PART_KNOB);
    lv_obj_set_style_shadow_opa(arc, LV_OPA_40, LV_PART_KNOB);
    lv_obj_set_style_shadow_offset_y(arc, 5, LV_PART_KNOB);

    lv_obj_t *label = lv_label_create(arc);
    lv_obj_center(label);
    lv_label_bind_text(label, &value, "%d °C");
    lv_obj_set_style_text_font(label, &lv_font_montserrat_32, 0);
    lv_obj_set_style_text_color(label, lv_color_hex(0xffffff), 0);
}