/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --no-compress --stride 1 --align 1 --font MiSans-Regular.ttf --range 32-126,41377-65278 --format lvgl -o MiSans_Regular_GB2312_16.c
 ******************************************************************************/

#ifdef __has_include
#if __has_include("lvgl.h")
#ifndef LV_LVGL_H_INCLUDE_SIMPLE
#define LV_LVGL_H_INCLUDE_SIMPLE
#endif
#endif
#endif

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef MISANS_REGULAR_GB2312_16
#define MISANS_REGULAR_GB2312_16 1
#endif

#if MISANS_REGULAR_GB2312_16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0x10,

    /* U+0022 "\"" */
    0xb6, 0xd0,

    /* U+0023 "#" */
    0x9, 0x6, 0x41, 0x11, 0xff, 0x13, 0x4, 0x83,
    0x23, 0xfe, 0x22, 0x9, 0x82, 0x40, 0x90,

    /* U+0024 "$" */
    0x8, 0x4, 0x1f, 0xd9, 0x38, 0x84, 0x41, 0xa0,
    0x78, 0xf, 0x4, 0xc2, 0x31, 0x1e, 0xf1, 0xf0,
    0x20,

    /* U+0025 "%" */
    0x78, 0x26, 0x63, 0x21, 0x31, 0x9b, 0x7, 0x98,
    0x1, 0x80, 0x1b, 0xc1, 0xb3, 0xd, 0x8, 0xc8,
    0x4c, 0x66, 0x41, 0xe0,

    /* U+0026 "&" */
    0x1c, 0xc, 0x82, 0x20, 0x88, 0x34, 0x6, 0x6,
    0x8b, 0x36, 0x87, 0x20, 0xcc, 0x70, 0xf2,

    /* U+0027 "'" */
    0xf0,

    /* U+0028 "(" */
    0x69, 0x69, 0x24, 0x92, 0x64, 0x98,

    /* U+0029 ")" */
    0xc9, 0x32, 0x49, 0x24, 0xb4, 0xb0,

    /* U+002A "*" */
    0x27, 0xc9, 0xf2, 0x0,

    /* U+002B "+" */
    0x10, 0x20, 0x47, 0xf1, 0x2, 0x4, 0x0,

    /* U+002C "," */
    0xe0,

    /* U+002D "-" */
    0xfc,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x18, 0x84, 0x62, 0x11, 0x88, 0x46, 0x21, 0x0,

    /* U+0030 "0" */
    0x3c, 0x66, 0x42, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x42, 0x66, 0x3c,

    /* U+0031 "1" */
    0x3f, 0x91, 0x11, 0x11, 0x11, 0x11,

    /* U+0032 "2" */
    0x3d, 0x8c, 0x8, 0x10, 0x20, 0x83, 0xc, 0x30,
    0xc1, 0x7, 0xf0,

    /* U+0033 "3" */
    0xfe, 0x18, 0x30, 0xc3, 0xf, 0x81, 0x81, 0x3,
    0x7, 0x13, 0xc0,

    /* U+0034 "4" */
    0x6, 0xe, 0xa, 0x1a, 0x32, 0x22, 0x62, 0xc2,
    0xff, 0x2, 0x2, 0x2,

    /* U+0035 "5" */
    0x7f, 0x83, 0x6, 0xf, 0x98, 0x80, 0x81, 0x3,
    0x7, 0x13, 0xc0,

    /* U+0036 "6" */
    0x8, 0x18, 0x30, 0x20, 0x7c, 0x42, 0x81, 0x81,
    0x81, 0x81, 0x42, 0x3c,

    /* U+0037 "7" */
    0xfe, 0xc, 0x10, 0x60, 0xc1, 0x6, 0x8, 0x30,
    0x40, 0x83, 0x0,

    /* U+0038 "8" */
    0x3c, 0x66, 0x42, 0x42, 0x66, 0x3c, 0x42, 0x81,
    0x81, 0x81, 0x42, 0x3c,

    /* U+0039 "9" */
    0x3c, 0x42, 0x81, 0x81, 0x81, 0x43, 0x3e, 0x6,
    0xc, 0xc, 0x18, 0x30,

    /* U+003A ":" */
    0x80, 0x80,

    /* U+003B ";" */
    0x80, 0xe0,

    /* U+003C "<" */
    0x0, 0xc, 0x73, 0x8c, 0x1c, 0xc, 0xe, 0x6,

    /* U+003D "=" */
    0xfe, 0x0, 0x0, 0xf, 0xe0,

    /* U+003E ">" */
    0x1, 0x81, 0xc0, 0xe0, 0x61, 0xc6, 0x30, 0xc0,

    /* U+003F "?" */
    0x3c, 0x8c, 0x8, 0x10, 0x61, 0x86, 0x8, 0x10,
    0x0, 0x0, 0x80,

    /* U+0040 "@" */
    0xf, 0x83, 0xc, 0x40, 0x24, 0xfb, 0x99, 0x99,
    0x9, 0x90, 0x99, 0x99, 0xcf, 0x64, 0x0, 0x30,
    0x1, 0xf8,

    /* U+0041 "A" */
    0xc, 0x3, 0x80, 0xe0, 0x68, 0x1b, 0x4, 0xc3,
    0x10, 0xfe, 0x60, 0x98, 0x34, 0xf, 0x1,

    /* U+0042 "B" */
    0xfe, 0x83, 0x81, 0x81, 0x83, 0xfe, 0x83, 0x81,
    0x81, 0x81, 0x82, 0xfc,

    /* U+0043 "C" */
    0x1f, 0x10, 0xd0, 0x10, 0x8, 0x4, 0x2, 0x1,
    0x0, 0x80, 0x20, 0x8, 0x63, 0xc0,

    /* U+0044 "D" */
    0xfe, 0x20, 0x48, 0xa, 0x1, 0x80, 0x60, 0x18,
    0x6, 0x1, 0x80, 0xe0, 0x28, 0x13, 0xf8,

    /* U+0045 "E" */
    0xff, 0x2, 0x4, 0x8, 0x1f, 0xe0, 0x40, 0x81,
    0x2, 0x7, 0xf0,

    /* U+0046 "F" */
    0xff, 0x2, 0x4, 0x8, 0x1f, 0xa0, 0x40, 0x81,
    0x2, 0x4, 0x0,

    /* U+0047 "G" */
    0x1f, 0x8, 0x34, 0x3, 0x0, 0x80, 0x20, 0xf8,
    0x6, 0x1, 0x80, 0x50, 0x12, 0xc, 0x7c,

    /* U+0048 "H" */
    0x80, 0xc0, 0x60, 0x30, 0x18, 0xf, 0xfe, 0x3,
    0x1, 0x80, 0xc0, 0x60, 0x30, 0x10,

    /* U+0049 "I" */
    0xff, 0xf0,

    /* U+004A "J" */
    0x4, 0x10, 0x41, 0x4, 0x10, 0x41, 0x4, 0x1c,
    0x5e,

    /* U+004B "K" */
    0x83, 0x43, 0x23, 0x13, 0xb, 0x7, 0x83, 0x61,
    0x10, 0x8c, 0x43, 0x20, 0xd0, 0x60,

    /* U+004C "L" */
    0x81, 0x2, 0x4, 0x8, 0x10, 0x20, 0x40, 0x81,
    0x2, 0x7, 0xf0,

    /* U+004D "M" */
    0x80, 0x38, 0xf, 0x83, 0xf0, 0x5b, 0x1b, 0x22,
    0x66, 0xcc, 0x71, 0x84, 0x30, 0x6, 0x0, 0xc0,
    0x10,

    /* U+004E "N" */
    0x80, 0xe0, 0x78, 0x36, 0x1b, 0xc, 0xc6, 0x33,
    0xd, 0x86, 0xc1, 0xe0, 0x70, 0x10,

    /* U+004F "O" */
    0x1f, 0x4, 0x11, 0x1, 0x40, 0x18, 0x3, 0x0,
    0x60, 0xc, 0x1, 0x80, 0x28, 0x8, 0x82, 0xf,
    0x80,

    /* U+0050 "P" */
    0xfc, 0x82, 0x81, 0x81, 0x81, 0x82, 0xfc, 0x80,
    0x80, 0x80, 0x80, 0x80,

    /* U+0051 "Q" */
    0x1f, 0x4, 0x11, 0x1, 0x40, 0x18, 0x3, 0x0,
    0x60, 0xc, 0x1, 0x81, 0x28, 0x38, 0x83, 0xf,
    0xe0, 0x2,

    /* U+0052 "R" */
    0xfc, 0x41, 0x20, 0x50, 0x28, 0x14, 0x1b, 0xf9,
    0x18, 0x86, 0x41, 0x20, 0xd0, 0x20,

    /* U+0053 "S" */
    0x3c, 0x43, 0x80, 0x80, 0xc0, 0x78, 0x1e, 0x3,
    0x1, 0x81, 0xc2, 0x3c,

    /* U+0054 "T" */
    0xff, 0x84, 0x2, 0x1, 0x0, 0x80, 0x40, 0x20,
    0x10, 0x8, 0x4, 0x2, 0x1, 0x0,

    /* U+0055 "U" */
    0x80, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x80, 0xe0, 0xd8, 0x47, 0xc0,

    /* U+0056 "V" */
    0xc0, 0x50, 0x36, 0xc, 0x82, 0x21, 0x8c, 0x41,
    0x10, 0x4c, 0x1a, 0x2, 0x80, 0xe0, 0x30,

    /* U+0057 "W" */
    0xc1, 0x82, 0x83, 0xd, 0xe, 0x1b, 0x14, 0x22,
    0x2c, 0x44, 0xc9, 0x89, 0x12, 0x1a, 0x34, 0x14,
    0x38, 0x38, 0x70, 0x60, 0xc0, 0xc1, 0x80,

    /* U+0058 "X" */
    0x60, 0x88, 0x63, 0x30, 0x48, 0xe, 0x3, 0x0,
    0xc0, 0x78, 0x33, 0x8, 0x46, 0x19, 0x3,

    /* U+0059 "Y" */
    0xc1, 0xa0, 0x98, 0xc4, 0x43, 0x60, 0xa0, 0x20,
    0x10, 0x8, 0x4, 0x2, 0x1, 0x0,

    /* U+005A "Z" */
    0xff, 0x3, 0x6, 0x4, 0xc, 0x18, 0x18, 0x30,
    0x20, 0x60, 0xc0, 0xff,

    /* U+005B "[" */
    0xf2, 0x49, 0x24, 0x92, 0x49, 0x38,

    /* U+005C "\\" */
    0xc2, 0x10, 0xc2, 0x10, 0xc6, 0x10, 0xc6, 0x10,

    /* U+005D "]" */
    0xe4, 0x92, 0x49, 0x24, 0x92, 0x78,

    /* U+005E "^" */
    0x10, 0x70, 0xa3, 0x24, 0x40,

    /* U+005F "_" */
    0xfe,

    /* U+0060 "`" */
    0x48, 0x80,

    /* U+0061 "a" */
    0x7c, 0x8c, 0x8, 0x13, 0xf8, 0x60, 0xc3, 0x7a,

    /* U+0062 "b" */
    0x81, 0x2, 0x5, 0xcc, 0x50, 0x60, 0xc1, 0x83,
    0x7, 0x15, 0xc0,

    /* U+0063 "c" */
    0x3c, 0x8e, 0x4, 0x8, 0x10, 0x20, 0x23, 0x3c,

    /* U+0064 "d" */
    0x1, 0x1, 0x1, 0x3d, 0x43, 0xc3, 0x81, 0x81,
    0x81, 0xc1, 0x43, 0x3d,

    /* U+0065 "e" */
    0x38, 0x8a, 0xc, 0x1f, 0xf0, 0x20, 0x23, 0x3c,

    /* U+0066 "f" */
    0x3a, 0x11, 0xf4, 0x21, 0x8, 0x42, 0x10, 0x80,

    /* U+0067 "g" */
    0x3d, 0x43, 0xc3, 0x81, 0x81, 0x81, 0xc1, 0x43,
    0x3d, 0x1, 0xc2, 0x3c,

    /* U+0068 "h" */
    0x81, 0x2, 0x5, 0xec, 0x70, 0x60, 0xc1, 0x83,
    0x6, 0xc, 0x10,

    /* U+0069 "i" */
    0xf3, 0xff, 0xff,

    /* U+006A "j" */
    0x33, 0x3, 0x33, 0x33, 0x33, 0x33, 0x33, 0xe0,

    /* U+006B "k" */
    0x81, 0x2, 0x4, 0x69, 0x96, 0x38, 0x78, 0x91,
    0x32, 0x34, 0x20,

    /* U+006C "l" */
    0xaa, 0xaa, 0xab,

    /* U+006D "m" */
    0xb9, 0xd9, 0xce, 0x10, 0xc2, 0x18, 0x43, 0x8,
    0x61, 0xc, 0x21, 0x84, 0x20,

    /* U+006E "n" */
    0xbd, 0x8e, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x82,

    /* U+006F "o" */
    0x3c, 0x42, 0x81, 0x81, 0x81, 0x81, 0x81, 0x42,
    0x3c,

    /* U+0070 "p" */
    0xbc, 0xc2, 0xc3, 0x81, 0x81, 0x81, 0x83, 0xc2,
    0xbc, 0x80, 0x80, 0x80,

    /* U+0071 "q" */
    0x3d, 0x43, 0xc3, 0x81, 0x81, 0x81, 0xc1, 0x43,
    0x3d, 0x1, 0x1, 0x1,

    /* U+0072 "r" */
    0xbc, 0x88, 0x88, 0x88, 0x80,

    /* U+0073 "s" */
    0x7a, 0x38, 0x30, 0x78, 0x30, 0x71, 0x78,

    /* U+0074 "t" */
    0x42, 0x11, 0xf4, 0x21, 0x8, 0x42, 0x10, 0x70,

    /* U+0075 "u" */
    0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xe3, 0x7a,

    /* U+0076 "v" */
    0xc3, 0x42, 0x42, 0x66, 0x24, 0x24, 0x3c, 0x18,
    0x18,

    /* U+0077 "w" */
    0xc6, 0x12, 0x30, 0x91, 0x4c, 0xca, 0x66, 0xd2,
    0x14, 0xd0, 0xa3, 0x87, 0x18, 0x10, 0xc0,

    /* U+0078 "x" */
    0x42, 0x66, 0x34, 0x18, 0x18, 0x38, 0x24, 0x66,
    0xc2,

    /* U+0079 "y" */
    0xc3, 0x43, 0x42, 0x66, 0x24, 0x34, 0x1c, 0x18,
    0x18, 0x10, 0x10, 0x30,

    /* U+007A "z" */
    0xfe, 0xc, 0x30, 0xc1, 0x6, 0x18, 0x60, 0xfe,

    /* U+007B "{" */
    0x19, 0x8, 0x42, 0x11, 0x98, 0x61, 0x8, 0x42,
    0x10, 0x60,

    /* U+007C "|" */
    0xff, 0xfe,

    /* U+007D "}" */
    0xc1, 0x8, 0x42, 0x10, 0xc3, 0x31, 0x8, 0x42,
    0x13, 0x0,

    /* U+007E "~" */
    0x67, 0x38,

    /* U+A71B "ꜛ" */
    0x23, 0xbe, 0x42, 0x0,

    /* U+A71C "ꜜ" */
    0x21, 0x8, 0xe2, 0x0,

    /* U+AB53 "ꭓ" */
    0xc2, 0x66, 0x24, 0x3c, 0x18, 0x18, 0x18, 0x38,
    0x2c, 0x64, 0x46, 0xc2,

    /* U+F92C "郎" */
    0x20, 0x1, 0x87, 0xbf, 0x25, 0x9, 0x28, 0x49,
    0x7e, 0x4a, 0x12, 0x90, 0x96, 0xfc, 0x94, 0x14,
    0x67, 0x23, 0x19, 0x1e, 0x6f, 0x61, 0x40, 0x2,
    0x0,

    /* U+F979 "凉" */
    0x0, 0x83, 0x2, 0x4, 0xff, 0xd8, 0x0, 0x20,
    0x0, 0x9f, 0xe0, 0x40, 0x89, 0x2, 0x27, 0xf8,
    0x83, 0x6, 0x2d, 0x11, 0x36, 0x4c, 0xcb, 0x23,
    0x31, 0x38, 0x40,

    /* U+F995 "秊" */
    0x7f, 0xf0, 0x8, 0x0, 0x20, 0x3f, 0xff, 0xe,
    0x80, 0x69, 0x8e, 0x21, 0xe0, 0x5, 0x3f, 0xf0,
    0x8, 0xf, 0xff, 0xc0, 0x80, 0x2, 0x0, 0x8,
    0x0,

    /* U+F9E7 "裏" */
    0x2, 0x3, 0xff, 0xf0, 0x0, 0xf, 0xfc, 0x23,
    0x10, 0xff, 0xc3, 0xff, 0x0, 0xc0, 0x7f, 0xf8,
    0xc, 0xf, 0xff, 0xc1, 0xc4, 0x38, 0xe3, 0xa5,
    0xc1, 0xe1, 0xc4, 0x0,

    /* U+F9F1 "隣" */
    0x0, 0x87, 0x94, 0xa4, 0xed, 0x21, 0xa, 0x7f,
    0xd0, 0xf2, 0x9a, 0x74, 0x42, 0x97, 0x7c, 0xa8,
    0xa7, 0x55, 0x74, 0xae, 0x27, 0xc2, 0xa, 0x20,
    0x40,

    /* U+FA0C "兀" */
    0xff, 0xfc, 0x23, 0x0, 0x8c, 0x2, 0x30, 0x8,
    0xc0, 0x23, 0x0, 0x8c, 0x2, 0x30, 0x18, 0xc0,
    0x43, 0x13, 0xc, 0x48, 0x31, 0xc0, 0x7c, 0x0,
    0x0,

    /* U+FA0D "嗀" */
    0x10, 0x0, 0x43, 0xef, 0xef, 0x84, 0x22, 0x7c,
    0x88, 0x6, 0x3f, 0xe0, 0x20, 0xff, 0x79, 0x8c,
    0x2, 0x27, 0xcd, 0x91, 0x1c, 0x44, 0x71, 0xf6,
    0x74, 0x10, 0x40,

    /* U+FA0E "﨎" */
    0x0, 0xa0, 0x84, 0x8f, 0xdf, 0xc2, 0xc8, 0xf,
    0xf9, 0xc4, 0x83, 0x1f, 0x8e, 0x48, 0xc9, 0xfe,
    0x0, 0x7, 0xff, 0xc, 0xc, 0xc, 0xc0, 0x3f,
    0xf, 0x87, 0xc0,

    /* U+FA0F "﨏" */
    0x23, 0x61, 0x11, 0x89, 0x6, 0x59, 0x1f, 0x1c,
    0x11, 0xb0, 0x98, 0xc5, 0x83, 0x2f, 0xf9, 0x20,
    0x8d, 0x5, 0x88, 0x20, 0x7f, 0x2, 0x8,

    /* U+FA11 "﨑" */
    0x20, 0x41, 0x2, 0x9, 0xff, 0x52, 0x4a, 0x92,
    0x54, 0x92, 0xbf, 0xf5, 0x2, 0xab, 0xd5, 0x52,
    0xaa, 0x95, 0x77, 0xac, 0x81, 0x0, 0x8, 0x1,
    0xc0,

    /* U+FA13 "﨓" */
    0x21, 0x21, 0x9, 0xb, 0xff, 0xe2, 0x46, 0x11,
    0x31, 0x89, 0xdb, 0xf4, 0xc2, 0xae, 0x95, 0x54,
    0x88, 0x94, 0x44, 0x22, 0x21, 0x11, 0x70,

    /* U+FA14 "﨔" */
    0x24, 0x91, 0x34, 0x88, 0x89, 0xff, 0xf6, 0x12,
    0x31, 0x19, 0xd7, 0xd5, 0x11, 0xa7, 0xf1, 0x4,
    0xb, 0xfe, 0x41, 0x2, 0x8, 0x10, 0xc0,

    /* U+FA18 "礼" */
    0x3f, 0x20, 0x0, 0x40, 0x0, 0x80, 0x1, 0x7,
    0xfa, 0x1, 0x84, 0xb, 0x8, 0x16, 0x90, 0x2d,
    0x20, 0xda, 0x45, 0x32, 0x8a, 0x65, 0x10, 0xca,
    0x27, 0x7, 0xc0,

    /* U+FA1F "﨟" */
    0x8, 0x43, 0xff, 0xf0, 0x84, 0x1e, 0xfe, 0x4a,
    0x9, 0x2f, 0xe7, 0xbf, 0x92, 0x40, 0x4b, 0xf9,
    0xf1, 0x24, 0xaa, 0x92, 0xc2, 0xcb, 0xea, 0xe0,
    0xe0,

    /* U+FA20 "蘒" */
    0x8, 0x43, 0xff, 0xf0, 0x84, 0xd, 0xfe, 0xe4,
    0x8, 0x9e, 0xef, 0xea, 0xb, 0xef, 0x72, 0xb5,
    0xba, 0xda, 0x6a, 0xeb, 0xef, 0x26, 0xa4, 0x83,
    0xf0,

    /* U+FA21 "﨡" */
    0x10, 0x10, 0x21, 0x20, 0x42, 0x43, 0xe4, 0x85,
    0x5f, 0xea, 0xa2, 0x15, 0x44, 0x2a, 0x8, 0x7d,
    0xfe, 0x20, 0x20, 0x50, 0x40, 0xa0, 0x87, 0xc1,
    0x0, 0xff, 0xc0,

    /* U+FA23 "﨣" */
    0x0, 0x10, 0x40, 0x41, 0x9, 0x1f, 0x94, 0x10,
    0x10, 0x42, 0x4f, 0xed, 0x4, 0x14, 0x50, 0x11,
    0x40, 0xf4, 0xed, 0x14, 0x4, 0x70, 0x13, 0xc0,
    0x8, 0xff, 0xc0, 0x0,

    /* U+FA24 "﨤" */
    0x40, 0x0, 0x8f, 0xf0, 0x84, 0x21, 0x88, 0x80,
    0x11, 0x0, 0x27, 0xb8, 0xc3, 0x11, 0xc4, 0x22,
    0x78, 0x44, 0x60, 0x91, 0xe1, 0x66, 0x62, 0x30,
    0xb, 0x0, 0x23, 0xff, 0x80,

    /* U+FA27 "﨧" */
    0x0, 0x81, 0x84, 0x52, 0xfa, 0x99, 0x28, 0xb,
    0x3f, 0xfc, 0x81, 0x1f, 0x18, 0xfb, 0xf5, 0x59,
    0xab, 0x10, 0xe7, 0xf2, 0x4, 0x7c, 0x20, 0x7,
    0x0,

    /* U+FA28 "﨨" */
    0x0, 0x60, 0xc1, 0x86, 0xbf, 0xd3, 0x18, 0x80,
    0x61, 0xef, 0xf2, 0x19, 0xbe, 0x24, 0x23, 0xfe,
    0xa1, 0x86, 0x86, 0x1a, 0xff, 0x38, 0x63, 0x81,
    0x80, 0x6, 0x0,

    /* U+FA29 "﨩" */
    0x0, 0x0, 0x8, 0x3d, 0xfd, 0x28, 0x2a, 0x7f,
    0x53, 0xfa, 0x90, 0x12, 0xff, 0x94, 0x4, 0xbf,
    0xee, 0x53, 0xd2, 0x98, 0xfc, 0xc0, 0x6, 0x1,
    0xe0,

    /* U+FE10 "︐" */
    0xdc,

    /* U+FE11 "︑" */
    0x86, 0x30,

    /* U+FE12 "︒" */
    0x74, 0x63, 0x17, 0x0,

    /* U+FE13 "︓" */
    0xc0, 0x3,

    /* U+FE14 "︔" */
    0xc0, 0x3, 0x70,

    /* U+FE15 "︕" */
    0xff, 0x10,

    /* U+FE16 "︖" */
    0x3d, 0x8c, 0x8, 0x10, 0x41, 0x4, 0x8, 0x0,
    0x0, 0x0, 0x80,

    /* U+FE17 "︗" */
    0xff, 0xff, 0x0, 0x6, 0x3f, 0x8d, 0x80, 0xdc,
    0x0, 0x60,

    /* U+FE18 "︘" */
    0xc0, 0x7, 0x60, 0x36, 0x3f, 0x8c, 0x0, 0x1f,
    0xff, 0xe0,

    /* U+FE19 "︙" */
    0xc0, 0x30, 0x3,

    /* U+FE30 "︰" */
    0xc0, 0x0, 0xc0,

    /* U+FE31 "︱" */
    0xff, 0xff,

    /* U+FE33 "︳" */
    0xff, 0xff,

    /* U+FE34 "︴" */
    0xaa, 0xae, 0xaa, 0xae,

    /* U+FE35 "︵" */
    0x1f, 0xe3, 0x80, 0xf8, 0x0, 0x40,

    /* U+FE36 "︶" */
    0x80, 0x7, 0x80, 0x71, 0xfe, 0x0,

    /* U+FE37 "︷" */
    0x1, 0x0, 0x7, 0x1, 0xfb, 0xf4, 0x0, 0x18,
    0x0, 0x20,

    /* U+FE38 "︸" */
    0x80, 0x3, 0x0, 0x5, 0xfb, 0xf0, 0x1c, 0x0,
    0x10, 0x0,

    /* U+FE39 "︹" */
    0x7f, 0xf9, 0x0, 0x2c, 0x0, 0xe0, 0x1,

    /* U+FE3A "︺" */
    0x80, 0x7, 0x0, 0x34, 0x0, 0x9f, 0xfe,

    /* U+FE3B "︻" */
    0xff, 0xff, 0xff, 0xfe, 0x1, 0xe0, 0x1,

    /* U+FE3C "︼" */
    0x80, 0x7, 0x80, 0x7f, 0xff, 0xff, 0xff,

    /* U+FE3D "︽" */
    0xf, 0x3, 0x9c, 0xe0, 0x78, 0xf1, 0x39, 0xce,
    0x7, 0x80, 0x10,

    /* U+FE3E "︾" */
    0x0, 0xc, 0x3, 0x70, 0xe1, 0xf8, 0xc6, 0x37,
    0xe, 0x1f, 0x80, 0x60,

    /* U+FE3F "︿" */
    0x0, 0x0, 0xf0, 0x39, 0xce, 0x7, 0x80, 0x10,

    /* U+FE40 "﹀" */
    0xc0, 0x37, 0xe, 0x1f, 0x80, 0x60,

    /* U+FE41 "﹁" */
    0xff, 0x1, 0x1,

    /* U+FE42 "﹂" */
    0x80, 0x80, 0xff,

    /* U+FE43 "﹃" */
    0xff, 0xc0, 0x7f, 0xa0, 0x50, 0x38,

    /* U+FE44 "﹄" */
    0xe0, 0xa0, 0xbf, 0x81, 0xff,

    /* U+FE49 "﹉" */
    0xe7, 0x38,

    /* U+FE4A "﹊" */
    0xf3, 0x78,

    /* U+FE4B "﹋" */
    0x0, 0x2, 0xff, 0xff,

    /* U+FE4C "﹌" */
    0xff, 0xff, 0x0, 0x0, 0xff, 0xff,

    /* U+FE4D "﹍" */
    0xe7, 0x38,

    /* U+FE4E "﹎" */
    0xf3, 0x78,

    /* U+FE4F "﹏" */
    0x2, 0x2, 0xff, 0xff,

    /* U+FE50 "﹐" */
    0xdc,

    /* U+FE51 "﹑" */
    0xc6, 0x30,

    /* U+FE52 "﹒" */
    0xc0,

    /* U+FE54 "﹔" */
    0xc0, 0x3, 0x70,

    /* U+FE55 "﹕" */
    0xc0, 0x3,

    /* U+FE56 "﹖" */
    0x3d, 0x8c, 0x8, 0x10, 0x41, 0x4, 0x8, 0x0,
    0x0, 0x0, 0x80,

    /* U+FE57 "﹗" */
    0xff, 0x10,

    /* U+FE59 "﹙" */
    0x69, 0x49, 0x24, 0x92, 0x24, 0xc0,

    /* U+FE5A "﹚" */
    0xc9, 0x32, 0x49, 0x25, 0xa5, 0x80,

    /* U+FE5B "﹛" */
    0x19, 0x8, 0x42, 0x13, 0xc, 0x21, 0x8, 0x42,
    0xc,

    /* U+FE5C "﹜" */
    0xc1, 0x8, 0x42, 0x10, 0x66, 0x21, 0x8, 0x42,
    0x60,

    /* U+FE5D "﹝" */
    0x7c, 0x88, 0x88, 0x88, 0x88, 0x88, 0xe1,

    /* U+FE5E "﹞" */
    0xe3, 0x11, 0x11, 0x11, 0x11, 0x11, 0x78,

    /* U+FE5F "﹟" */
    0x12, 0x12, 0x12, 0xff, 0x26, 0x24, 0x24, 0xff,
    0x64, 0x6c, 0x4c,

    /* U+FE60 "﹠" */
    0x38, 0x64, 0x44, 0x64, 0x68, 0x38, 0x72, 0x9a,
    0x8e, 0x86, 0xce, 0x7b,

    /* U+FE61 "﹡" */
    0x27, 0xc9, 0xf2, 0x0,

    /* U+FE62 "﹢" */
    0x10, 0x20, 0x47, 0xf1, 0x2, 0x4, 0x0,

    /* U+FE63 "﹣" */
    0xfc,

    /* U+FE64 "﹤" */
    0x3, 0xe, 0x38, 0xe0, 0xe0, 0x38, 0xc, 0x3,
    0x0,

    /* U+FE65 "﹥" */
    0xc0, 0x70, 0x1c, 0x7, 0x7, 0x1c, 0x30, 0xc0,
    0x0,

    /* U+FE66 "﹦" */
    0xfe, 0x0, 0x7, 0xf0,

    /* U+FE68 "﹨" */
    0x41, 0x6, 0x18, 0x20, 0xc3, 0x4, 0x10, 0x60,
    0x82,

    /* U+FE69 "﹩" */
    0x10, 0x71, 0xf4, 0x99, 0x1a, 0x1c, 0xe, 0x16,
    0x26, 0x4e, 0xb3, 0x82, 0x0,

    /* U+FE6A "﹪" */
    0x62, 0x96, 0x94, 0x94, 0x98, 0x68, 0x10, 0x16,
    0x35, 0x29, 0x25, 0x46,

    /* U+FE6B "﹫" */
    0x3c, 0x66, 0x42, 0x9d, 0xa5, 0xa5, 0xa5, 0xa5,
    0x9e, 0x40, 0x60, 0x3c};

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 74, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 68, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 87, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 5, .adv_w = 181, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 20, .adv_w = 148, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 37, .adv_w = 210, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 57, .adv_w = 182, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 49, .box_w = 1, .box_h = 4, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 73, .adv_w = 79, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 79, .adv_w = 79, .box_w = 3, .box_h = 15, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 85, .adv_w = 114, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 89, .adv_w = 157, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 96, .adv_w = 65, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 97, .adv_w = 116, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 98, .adv_w = 62, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 99, .adv_w = 102, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 107, .adv_w = 162, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 119, .adv_w = 103, .box_w = 4, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 125, .adv_w = 145, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 136, .adv_w = 152, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 147, .adv_w = 151, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 159, .adv_w = 152, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 170, .adv_w = 151, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 182, .adv_w = 135, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 193, .adv_w = 161, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 205, .adv_w = 154, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 217, .adv_w = 62, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 219, .adv_w = 65, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 221, .adv_w = 157, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 229, .adv_w = 157, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 234, .adv_w = 157, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 242, .adv_w = 125, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 253, .adv_w = 211, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 271, .adv_w = 170, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 286, .adv_w = 169, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 298, .adv_w = 177, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 312, .adv_w = 190, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 327, .adv_w = 150, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 338, .adv_w = 143, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 188, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 364, .adv_w = 185, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 378, .adv_w = 63, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 380, .adv_w = 122, .box_w = 6, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 389, .adv_w = 164, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 403, .adv_w = 144, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 225, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 431, .adv_w = 188, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 445, .adv_w = 199, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 462, .adv_w = 160, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 474, .adv_w = 200, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 492, .adv_w = 163, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 506, .adv_w = 152, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 518, .adv_w = 155, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 532, .adv_w = 180, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 546, .adv_w = 172, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 561, .adv_w = 248, .box_w = 15, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 584, .adv_w = 162, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 599, .adv_w = 157, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 613, .adv_w = 152, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 625, .adv_w = 90, .box_w = 3, .box_h = 15, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 631, .adv_w = 87, .box_w = 5, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 639, .adv_w = 90, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 645, .adv_w = 114, .box_w = 7, .box_h = 5, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 650, .adv_w = 117, .box_w = 7, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 651, .adv_w = 66, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 653, .adv_w = 137, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 661, .adv_w = 152, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 672, .adv_w = 134, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 680, .adv_w = 152, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 692, .adv_w = 141, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 700, .adv_w = 87, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 708, .adv_w = 151, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 720, .adv_w = 148, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 731, .adv_w = 63, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 734, .adv_w = 63, .box_w = 4, .box_h = 15, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 742, .adv_w = 129, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 753, .adv_w = 64, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 756, .adv_w = 226, .box_w = 11, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 769, .adv_w = 148, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 777, .adv_w = 146, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 786, .adv_w = 152, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 798, .adv_w = 152, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 810, .adv_w = 96, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 815, .adv_w = 120, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 822, .adv_w = 91, .box_w = 5, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 830, .adv_w = 148, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 838, .adv_w = 129, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 847, .adv_w = 202, .box_w = 13, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 862, .adv_w = 125, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 871, .adv_w = 131, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 883, .adv_w = 121, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 891, .adv_w = 90, .box_w = 5, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 901, .adv_w = 57, .box_w = 1, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 903, .adv_w = 90, .box_w = 5, .box_h = 15, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 913, .adv_w = 133, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 915, .adv_w = 87, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 919, .adv_w = 87, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 923, .adv_w = 126, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 935, .adv_w = 256, .box_w = 13, .box_h = 15, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 960, .adv_w = 256, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 987, .adv_w = 256, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1012, .adv_w = 256, .box_w = 14, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1040, .adv_w = 256, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1065, .adv_w = 256, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1090, .adv_w = 256, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1117, .adv_w = 256, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1144, .adv_w = 256, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1167, .adv_w = 256, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1192, .adv_w = 256, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1215, .adv_w = 256, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1238, .adv_w = 256, .box_w = 15, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1265, .adv_w = 256, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1290, .adv_w = 256, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1315, .adv_w = 256, .box_w = 15, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1342, .adv_w = 256, .box_w = 14, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1370, .adv_w = 256, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1399, .adv_w = 256, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1424, .adv_w = 256, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1451, .adv_w = 256, .box_w = 13, .box_h = 15, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 1476, .adv_w = 256, .box_w = 2, .box_h = 3, .ofs_x = 11, .ofs_y = 8},
    {.bitmap_index = 1477, .adv_w = 256, .box_w = 4, .box_h = 4, .ofs_x = 10, .ofs_y = 8},
    {.bitmap_index = 1479, .adv_w = 256, .box_w = 5, .box_h = 5, .ofs_x = 10, .ofs_y = 8},
    {.bitmap_index = 1483, .adv_w = 256, .box_w = 2, .box_h = 8, .ofs_x = 11, .ofs_y = 3},
    {.bitmap_index = 1485, .adv_w = 256, .box_w = 2, .box_h = 10, .ofs_x = 11, .ofs_y = 1},
    {.bitmap_index = 1488, .adv_w = 256, .box_w = 1, .box_h = 12, .ofs_x = 12, .ofs_y = 0},
    {.bitmap_index = 1490, .adv_w = 256, .box_w = 7, .box_h = 12, .ofs_x = 8, .ofs_y = 0},
    {.bitmap_index = 1501, .adv_w = 256, .box_w = 15, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1511, .adv_w = 256, .box_w = 15, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 1521, .adv_w = 256, .box_w = 2, .box_h = 12, .ofs_x = 7, .ofs_y = 0},
    {.bitmap_index = 1524, .adv_w = 256, .box_w = 2, .box_h = 9, .ofs_x = 7, .ofs_y = 2},
    {.bitmap_index = 1527, .adv_w = 256, .box_w = 1, .box_h = 16, .ofs_x = 8, .ofs_y = -2},
    {.bitmap_index = 1529, .adv_w = 256, .box_w = 1, .box_h = 16, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 1531, .adv_w = 256, .box_w = 2, .box_h = 16, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 1535, .adv_w = 256, .box_w = 14, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1541, .adv_w = 256, .box_w = 14, .box_h = 3, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 1547, .adv_w = 256, .box_w = 15, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1557, .adv_w = 256, .box_w = 15, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 1567, .adv_w = 256, .box_w = 14, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1574, .adv_w = 256, .box_w = 14, .box_h = 4, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 1581, .adv_w = 256, .box_w = 14, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1588, .adv_w = 256, .box_w = 14, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 1595, .adv_w = 256, .box_w = 12, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1606, .adv_w = 256, .box_w = 12, .box_h = 8, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 1618, .adv_w = 256, .box_w = 12, .box_h = 5, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1626, .adv_w = 256, .box_w = 12, .box_h = 4, .ofs_x = 2, .ofs_y = 8},
    {.bitmap_index = 1632, .adv_w = 256, .box_w = 8, .box_h = 3, .ofs_x = 7, .ofs_y = 1},
    {.bitmap_index = 1635, .adv_w = 256, .box_w = 8, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 1638, .adv_w = 256, .box_w = 9, .box_h = 5, .ofs_x = 7, .ofs_y = 1},
    {.bitmap_index = 1644, .adv_w = 256, .box_w = 8, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 1649, .adv_w = 256, .box_w = 13, .box_h = 1, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 1651, .adv_w = 256, .box_w = 13, .box_h = 1, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 1653, .adv_w = 256, .box_w = 16, .box_h = 2, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 1657, .adv_w = 256, .box_w = 16, .box_h = 3, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 1663, .adv_w = 256, .box_w = 13, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1665, .adv_w = 256, .box_w = 13, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1667, .adv_w = 256, .box_w = 16, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1671, .adv_w = 128, .box_w = 2, .box_h = 3, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 1672, .adv_w = 128, .box_w = 4, .box_h = 4, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 1674, .adv_w = 128, .box_w = 2, .box_h = 1, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1675, .adv_w = 128, .box_w = 2, .box_h = 10, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 1678, .adv_w = 128, .box_w = 2, .box_h = 8, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1680, .adv_w = 128, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1691, .adv_w = 128, .box_w = 1, .box_h = 12, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 1693, .adv_w = 128, .box_w = 3, .box_h = 14, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 1699, .adv_w = 128, .box_w = 3, .box_h = 14, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 1705, .adv_w = 128, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1714, .adv_w = 128, .box_w = 5, .box_h = 14, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 1723, .adv_w = 128, .box_w = 4, .box_h = 14, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 1730, .adv_w = 128, .box_w = 4, .box_h = 14, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 1737, .adv_w = 128, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1748, .adv_w = 128, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1760, .adv_w = 128, .box_w = 5, .box_h = 5, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 1764, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 1771, .adv_w = 128, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 1772, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1781, .adv_w = 128, .box_w = 8, .box_h = 9, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1790, .adv_w = 128, .box_w = 7, .box_h = 4, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 1794, .adv_w = 128, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1803, .adv_w = 128, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1816, .adv_w = 128, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1828, .adv_w = 128, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0}};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_1[] = {
    0x0, 0x1, 0x438, 0x5211, 0x525e, 0x527a, 0x52cc, 0x52d6,
    0x52f1, 0x52f2, 0x52f3, 0x52f4, 0x52f6, 0x52f8, 0x52f9, 0x52fd,
    0x5304, 0x5305, 0x5306, 0x5308, 0x5309, 0x530c, 0x530d, 0x530e,
    0x56f5, 0x56f6, 0x56f7, 0x56f8, 0x56f9, 0x56fa, 0x56fb, 0x56fc,
    0x56fd, 0x56fe, 0x5715, 0x5716};

static const uint8_t glyph_id_ofs_list_3[] = {
    0, 1, 2, 3, 4, 5, 6, 7,
    8, 9, 0, 10, 11, 12, 13, 0,
    14, 15, 16, 17, 18, 19, 20, 21,
    22, 23, 24, 25, 26, 27, 0, 28,
    29, 30, 31};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
    {
        {.range_start = 32, .range_length = 95, .glyph_id_start = 1, .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY},
        {.range_start = 42779, .range_length = 22295, .glyph_id_start = 96, .unicode_list = unicode_list_1, .glyph_id_ofs_list = NULL, .list_length = 36, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY},
        {.range_start = 65075, .range_length = 18, .glyph_id_start = 132, .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY},
        {.range_start = 65097, .range_length = 35, .glyph_id_start = 150, .unicode_list = NULL, .glyph_id_ofs_list = glyph_id_ofs_list_3, .list_length = 35, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_FULL}};

/*-----------------
 *    KERNING
 *----------------*/

/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
    {
        0, 0, 0, 1, 0, 0, 0, 2,
        1, 3, 0, 0, 0, 4, 5, 4,
        6, 7, 0, 8, 9, 10, 11, 12,
        13, 14, 15, 0, 0, 0, 0, 0,
        16, 17, 18, 19, 20, 21, 22, 23,
        24, 0, 0, 25, 26, 27, 0, 0,
        21, 28, 29, 30, 31, 32, 33, 34,
        35, 36, 37, 38, 3, 0, 0, 0,
        39, 0, 40, 41, 42, 0, 41, 43,
        44, 40, 45, 45, 46, 47, 40, 40,
        41, 41, 44, 48, 49, 50, 51, 52,
        53, 54, 52, 55, 3, 0, 0, 0,
        0, 0, 56, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
    {
        0, 0, 0, 1, 0, 0, 0, 2,
        1, 0, 0, 0, 0, 3, 4, 3,
        5, 6, 7, 8, 9, 10, 11, 12,
        13, 14, 15, 0, 0, 0, 0, 0,
        16, 17, 18, 0, 19, 0, 0, 0,
        19, 0, 0, 20, 0, 0, 0, 0,
        19, 0, 19, 0, 21, 22, 23, 24,
        25, 26, 27, 28, 0, 0, 29, 0,
        0, 0, 30, 31, 32, 32, 32, 33,
        34, 31, 35, 36, 31, 37, 38, 38,
        32, 38, 32, 38, 39, 40, 41, 42,
        43, 44, 42, 45, 0, 0, 0, 0,
        0, 0, 46, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
    {
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -23, 0, -15, 5, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -15, 0, -10, -5,
        0, -8, -20, 0, -13, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 10,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -9,
        -23, 0, -7, -12, -5, -5, -8, -3,
        -26, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -5,
        -8, 0, 0, 0, -8, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -18,
        0, -13, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -9, 0,
        0, 0, 0, -7, -4, 0, 0, 0,
        -5, 0, 0, 0, 0, -7, 0, -7,
        0, -9, 0, -7, -4, 0, -13, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -2, 0, -4,
        0, 0, -7, -8, 0, -5, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -3, 0, 0, -5, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -5, 0, 0, 0, 0, -5,
        0, 0, 0, 0, 0, 0, -3, -7,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -3, -5, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -3, 0,
        0, 0, 0, 0, -7, 0, -5, 0,
        0, 0, -5, 0, -5, -8, 0, 0,
        0, 0, 0, -7, 0, -10, 0, 0,
        -10, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -5, 0,
        0, 0, -7, 0, 0, 0, 0, 0,
        -5, 0, 0, -11, 0, 0, 0, 0,
        0, 0, 0, -6, 0, -7, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -18, 0, -5, 0, 0, 0,
        -15, 0, 0, 0, 0, 0, -8, 0,
        -3, -16, 0, 0, 0, 0, 0, -26,
        0, -20, 0, -4, -27, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -10, 0, -7, -5, 0,
        5, -20, -36, -5, -23, -8, 0, 0,
        0, -18, 0, -18, 1, -8, 0, 3,
        0, -25, 0, -28, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -22, 0, -21,
        -7, -18, 0, 0, 0, -12, -15, 0,
        -10, 0, 0, -11, -10, 0, 0, 0,
        -3, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -5, 0, -6, -6, 0, 0,
        0, 0, 0, -6, 0, -4, 0, 0,
        -10, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -5, 0, 0, 0, -15, -28, 0,
        -13, 0, 0, 0, 0, -8, 0, -8,
        0, -5, 0, 0, 0, -18, 0, -21,
        0, 0, 0, -2, 0, -11, -5, 0,
        0, -10, 0, -7, 2, 0, 0, 0,
        0, 0, 0, 1, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -7, -13, -5, -8, 3, -5,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -10, 0, 0, 0, 0, 0, 0,
        0, -10, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -23, -3,
        0, -10, 0, -7, -15, 0, 0, 0,
        0, 0, 0, 0, -18, -19, 0, 0,
        -9, 0, 0, -22, -5, -19, -15, 0,
        -20, 0, 0, 0, 0, 0, -2, 0,
        0, 0, -1, 0, 0, -7, -5, -8,
        -8, 0, 0, -10, -8, 0, -5, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -6, 0, -3, 0, -3,
        0, -6, 0, -9, -3, -5, -8, -1,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -1,
        -2, 0, 0, 0, 0, -10, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -5, -5, 0, 0, -1,
        0, 0, 0, -5, -8, -3, 0, -3,
        0, -5, 0, -5, 0, 0, 0, 0,
        0, 0, 0, -3, -5, -3, 0, 0,
        -5, 0, -13, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -6,
        0, -9, 0, -13, 0, -9, 0, -8,
        -4, -9, -10, -6, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -3, 0, 0, -5,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -3,
        -1, 0, 0, -3, 5, -7, -18, 0,
        0, 0, 0, 0, 0, -7, 0, -8,
        0, 0, 0, 0, 0, -14, 0, -22,
        -1, 0, 0, 0, 0, -3, 0, 0,
        0, -13, 0, -9, 0, -8, 0, 0,
        0, -8, -4, 0, -5, -3, -3, -5,
        -3, 0, 0, 0, -10, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -7, 0, -6, 0, 0, 0, -8,
        0, -8, -3, -5, -12, -1, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -2, 0, 0, -3, -4, -5, 0, 0,
        0, 0, -4, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -8, 0, 0, 0, 0,
        0, -4, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -10,
        5, -23, 0, -12, -8, 0, 0, -7,
        0, 0, 0, 0, -12, -9, 0, 0,
        -5, -5, -4, 0, 0, 0, 0, 0,
        0, 0, 0, -4, 0, -8, -5, -5,
        0, 0, -3, -2, -3, -5, -8, -3,
        -13, 0, 0, -13, -23, 0, 7, -23,
        0, 0, -18, 0, 0, 0, 0, 0,
        -6, 0, -30, -23, 0, 0, -5, 0,
        0, -36, -6, -28, -20, 0, -38, 0,
        0, -4, 0, -4, -5, -4, 0, 0,
        0, 0, 0, -10, -5, -17, -13, 0,
        0, 0, 0, -10, -26, 0, 0, 0,
        0, -2, 0, -7, 0, 0, 0, 0,
        0, 0, 0, -17, 0, -26, 0, -5,
        0, -6, -3, -7, -8, -5, 0, -6,
        0, -6, 6, -6, 0, 0, 0, 0,
        -3, 6, 0, 3, 7, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -5, 0, -10, 0, -8, 0, -6,
        -6, -9, -10, -3, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -4,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -7, 0, -5, 0, 0, -1, 0,
        -4, 0, 0, -3, 0, -1, 0, -1,
        0, 0, 0, 0, 0, 0, -1, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -3, 0, -2, 0, -1, -5, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -1, -1,
        0, 0, 5, -17, -28, -20, 0, -9,
        0, 0, 0, -26, 0, -20, 0, -6,
        0, 0, 0, -22, -8, -23, -4, 0,
        0, -5, 0, -5, 0, 0, 0, -29,
        -18, -33, -10, -31, 0, 0, 0, -26,
        -28, -6, -21, -23, -26, -28, -24, -26,
        0, 0, -9, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -5, 0, -9, 0, 0, 0, 0,
        0, -3, 0, -1, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -18,
        -33, -10, 0, -7, 0, -5, 0, -16,
        -5, -13, 0, -4, 0, 0, 0, -19,
        -8, -23, -3, 0, 0, 0, 0, 0,
        0, 0, 0, -20, -13, -19, -4, -18,
        0, 0, 0, -13, -16, -2, -12, -8,
        -8, -10, -8, 0, 0, -10, -22, -7,
        0, -4, 0, 0, 0, -13, 0, 0,
        0, 0, 0, 0, 0, -14, -4, -23,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -17, 0, -14, -3, -14, 0, 0,
        0, -10, -12, 0, -11, -3, -5, -8,
        -5, 0, 0, -7, 3, -20, 0, 0,
        -5, 0, -3, -5, -7, -5, 0, 0,
        -12, -5, -5, 0, -9, -1, -2, -6,
        -3, 0, 0, 0, 0, 0, 0, -4,
        0, -6, -5, -6, 0, 0, -2, 0,
        -5, -5, -8, -8, -10, 0, 0, -13,
        0, -20, -30, -17, 0, -13, 0, -5,
        -3, -26, 0, -23, 0, -10, -4, 0,
        -10, -20, -10, -26, -5, 0, 0, 0,
        0, 0, 0, 0, 0, -23, -13, -27,
        -10, -26, 0, 0, 0, -20, -23, -8,
        -18, -11, -13, -13, -16, -10, 0, -10,
        0, -13, 0, 0, 0, 0, 0, -12,
        0, 0, 0, 0, 0, 0, 0, 0,
        -8, 0, 0, 0, -3, 0, 0, 0,
        0, 0, 0, 0, 0, -4, 0, 0,
        0, 0, 0, 0, 0, -4, -5, -3,
        -5, 0, 0, -5, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -15, 0, 0, 0, 16,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, -8, 0, 0, 0, 0, 0,
        -8, 0, 0, 0, 0, 0, -10, 0,
        -5, -13, 0, 0, 0, 0, -4, -30,
        0, -22, -15, -5, -20, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -10, 0, -5, 0, 0, 0, 0, 0,
        0, 0, 0, 0, -14, 0, -7, -18,
        0, -4, 0, -3, -3, -31, 0, -19,
        -14, -8, -23, -3, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -1, -3, -4, -2, -3, -3, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, -7, 0, -4,
        0, 0, -3, -28, 0, -15, -12, -6,
        -27, 0, 0, -4, 0, -3, 0, 0,
        -3, 0, -1, 0, 0, 0, 0, -2,
        0, -5, 0, 0, 8, -5, -17, 3,
        0, 0, 0, 0, 0, -10, 0, 0,
        5, 0, 5, 0, 0, -10, 0, -17,
        1, 0, 0, 3, 4, 0, 0, 0,
        3, -5, 0, -4, 0, -4, 0, 0,
        0, 0, -3, 1, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -23,
        0, -20, -14, 0, -15, 0, 0, 0,
        0, 0, 0, 0, 0, 5, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 4, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, -5, -4,
        3, -6, 0, 0, 0, 0, 0, -7,
        0, -6, 0, -7, -2, -5, 0, 0,
        -3, 0, 0, -26, -3, -12, -6, 0,
        -14, 0, 0, -2, 0, -3, 0, 0,
        0, 0, -1, 0, -3, 0, 0, 0,
        0, 0, 0, 0, 0, -3, 5, -4,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -6, 0, 0, 0, 0,
        0, -13, 0, 0, 0, 0, -13, 0,
        0, 1, 0, 0, 0, 0, 0, 0,
        -3, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -12, -27, 0, 0, 0,
        0, -5, -13, -13, 0, -6, 0, 0,
        3, 0, 0, -13, 0, -10, 0, -23,
        0, -10, -5, -10, -8, -3, 0, -6,
        0, -4, 0, -4, 0, 0, 0, 0,
        0, 0, -3, 1, 3, 0, 0, 0,
        -8, 0, 0, 0, 0, 0, -8, 0,
        0, 0, 0, 0, -7, 0, 0, -8,
        0, 0, 0, 0, 0, -27, 0, -14,
        -11, -7, -20, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -4, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, -3,
        0, 0, 0, 0, 4, 0, 0, 0,
        0, 0, 3, -8, 0, -4, -3, 0,
        -10, 0, 0, 0, 0, -2, 1, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        -8, 0, 0, -7, 0, 0, 0, 0,
        0, -23, 0, -13, -9, -3, -18, 0,
        0, 0, 0, 0, 0, 0, 0, 3,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -10, -20, 0, 0, 0,
        0, 0, 0, -7, 0, -8, 0, 0,
        0, 0, 0, -10, 0, -23, 0, -31,
        0, -8, -3, -10, -11, -5, 0, -6,
        0, -1, 0, -1, 0, 0, 0, 0,
        -2, 0, 0, 0, 0, 0, 0, 0,
        0, -6, -20, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, -9, 0, -18, 0, -26, 0, -8,
        -5, -13, -12, -5, 0, -5, 0, -3,
        0, 0, 0, 0, 0, 0, -1, 0,
        0, 0, 0, 0, 0, 0, 0, -3,
        0, -5, 0, 0, 0, 0, 0, -9,
        0, -7, -7, -5, 0, 0, 0, 0,
        0, 0, 0, -28, 0, -10, -8, 0,
        -13, 0, 0, -4, 0, -4, 0, 0,
        0, 0, -3, 0, -3, 0, -1, 0,
        0, 0, 0, 0, 0, -8, 0, -5,
        0, 0, 0, 0, 0, -10, 0, -5,
        -6, 0, -2, 0, 0, 0, -4, 0,
        0, -23, 0, -11, -7, 0, -16, 0,
        0, -1, 0, -4, 0, -3, 0, 0,
        0, 0, -3, 0, -1, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, -15, 0, 0, 0, -26,
        0, 0, 0, -15, -13, -9, 0, 0,
        0, -5, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0};

/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
    {
        .class_pair_values = kern_class_values,
        .left_class_mapping = kern_left_class_mapping,
        .right_class_mapping = kern_right_class_mapping,
        .left_class_cnt = 56,
        .right_class_cnt = 46,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 4,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif

};

extern const lv_font_t MiSans_Regular_GB2312_16;

/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t MiSans_Regular_GB2312_16 = {
#else
lv_font_t MiSans_Regular_GB2312_16 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt, /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt, /*Function pointer to get glyph's bitmap*/
    .line_height = 17,                              /*The maximum line height required by the font*/
    .base_line = 3,                                 /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .static_bitmap = 0,
    .dsc = &font_dsc, /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = &MiSans_Regular_GB2312_16,
#endif
    .user_data = NULL,
};

#endif /*#if MISANS_REGULAR_GB2312_16*/
