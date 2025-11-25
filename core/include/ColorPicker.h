#ifndef COLOR_PICKER_H
#define COLOR_PICKER_H

typedef struct {
    float r;
    float g;
    float b;
} rgb_color;

rgb_color GetColor(double currentTime);

#endif