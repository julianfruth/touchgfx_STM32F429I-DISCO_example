/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

Screen1ViewBase::Screen1ViewBase()
{
    a1.setXY(0, 0);
    a1.setBitmap(Bitmap(BITMAP_A_ID));

    buttonWithLabel1.setXY(35, 70);
    buttonWithLabel1.setBitmaps(Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    buttonWithLabel1.setLabelText(TypedText(T_SINGLEUSEID1));
    buttonWithLabel1.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    buttonWithLabel1.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));

    add(a1);
    add(buttonWithLabel1);
}

void Screen1ViewBase::setupScreen()
{

}
