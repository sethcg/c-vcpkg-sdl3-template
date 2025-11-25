#include <gtest/gtest.h>
#include <SDL3/SDL.h>

extern "C" {
    #include <ColorPicker.h>
}

TEST(ColorPicker_Test, GetValidColorValue_Zero) {
    // ARRANGE

    // ACT
    rgb_color color = GetColor(0);

    // ASSERT
    EXPECT_TRUE(color.r > 0);
    EXPECT_TRUE(color.g > 0);
    EXPECT_TRUE(color.b > 0);
}

TEST(ColorPicker_Test, GetValidColorValue_CurrentTime) {
    // ARRANGE
    const double currentTime = ((double) SDL_GetTicks()) / 1000.0;

    // ACT
    rgb_color color = GetColor(currentTime);

    // ASSERT
    EXPECT_TRUE(color.r > 0);
    EXPECT_TRUE(color.g > 0);
    EXPECT_TRUE(color.b > 0);
}