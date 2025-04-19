#ifndef LUX_DISPLAYVIEW_HPP
#define LUX_DISPLAYVIEW_HPP

#include <gui_generated/lux_display_screen/LUX_DISPLAYViewBase.hpp>
#include <gui/lux_display_screen/LUX_DISPLAYPresenter.hpp>

class LUX_DISPLAYView : public LUX_DISPLAYViewBase
{
public:
    LUX_DISPLAYView();
    virtual ~LUX_DISPLAYView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleTickEvent();
protected:


    int counter_mph = 0;
    int counter_solar = 0;
    int counter_ctemp = 0;
    int counter_battery1 = 0;
    int counter_battery2 = 0;
    int counter_amp = 0;

    // Direction flag for progress bar animation
    bool increase = true;
};

#endif // LUX_DISPLAYVIEW_HPP
