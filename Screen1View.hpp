#ifndef SCREEN1VIEW_HPP
#define SCREEN1VIEW_HPP

#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <gui/screen1_screen/Screen1Presenter.hpp>
#include <touchgfx/widgets/Widget.hpp>
#include <touchgfx/hal/HAL.hpp>

class Screen1View : public Screen1ViewBase
{
public:
    Screen1View();
    virtual ~Screen1View() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleTickEvent();

protected:
    bool increase = true;
    uint8_t counter_mph;
    uint8_t counter_solar;
    uint8_t counter_ctemp;
    uint8_t counter_battery1;
    uint8_t counter_battery2;
    uint8_t counter_amp;
};

#endif // SCREEN1VIEW_HPP