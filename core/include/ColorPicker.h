#ifndef COLOR_PICKER_H
#define COLOR_PICKER_H

typedef struct {
    float r;
    float g;
    float b;
} rgb_color;

#define create_rgb_color(r_value, g_value, b_value) { .r = r_value, .g = g_value, .b = b_value };

rgb_color GetColor(double currentTime);

#endif