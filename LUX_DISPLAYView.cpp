#include <gui/lux_display_screen/LUX_DISPLAYView.hpp>

LUX_DISPLAYView::LUX_DISPLAYView()
{
    int i = 0;
    touchgfx_printf("Application is running through simulator! \n");
    touchgfx_printf("Print our value for integer i = %i \n", i);
}

void LUX_DISPLAYView::setupScreen() 
{
    LUX_DISPLAYViewBase::setupScreen();
}

void LUX_DISPLAYView::tearDownScreen()
{
    LUX_DISPLAYViewBase::tearDownScreen();
}

void LUX_DISPLAYView::handleTickEvent()
{
    counter_mph++;
    counter_solar++;
    counter_ctemp++;
    counter_battery1++;
    counter_battery2++;
    counter_amp++;

    if(counter_mph % 15 == 0) // Every 0.25 seconds
    {
        int currentValue = batterytext.getValue();
        int max;
        int min;
        batterytext.getRange(min, max);

        if (currentValue == min)
        {
            increase = true;
        }
        else if (currentValue == max)
        {
            increase = false;
        }

        int nextValue = increase == true ? currentValue + 1 : currentValue - 1;

        counter_mph = 0;
        batterytext.setValue(nextValue);
    }
    if(counter_solar % 60 == 0) // Every 0.25 seconds
    {
        int currentValue = cabintext.getValue();
        int max;
        int min;
        cabintext.getRange(min, max);

        if (currentValue == min)
        {
            increase = true;
        }
        else if (currentValue == max)
        {
            increase = false;
        }

        int nextValue = increase == true ? currentValue + 1 : currentValue - 1;

        counter_solar = 0;
        cabintext.setValue(nextValue);
    }
    if(counter_ctemp % 88 == 0) // Every 0.25 seconds
    {
        int currentValue = MPH.getValue();
        int max;
        int min;
        MPH.getRange(min, max);

        if (currentValue == min)
        {
            increase = true;
        }
        else if (currentValue == max)
        {
            increase = false;
        }

        int nextValue = increase == true ? currentValue + 1 : currentValue - 1;

        counter_ctemp = 0;
        MPH.setValue(nextValue);
    }
    if(counter_battery1 % 103 == 0) // Every 0.25 seconds
    {
        int currentValue = Amps.getValue();
        int max;
        int min;
        Amps.getRange(min, max);

        if (currentValue == min)
        {
            increase = true;
        }
        else if (currentValue == max)
        {
            increase = false;
        }

        int nextValue = increase == true ? currentValue + 1 : currentValue - 1;

        counter_battery1 = 0;
        Amps.setValue(nextValue);
    }
    if(counter_battery2 % 166 == 0) // Every 0.25 seconds
    {
        int currentValue = batterycurrent.getValue();
        int max;
        int min;
        batterycurrent.getRange(min, max);

        if (currentValue == min)
        {
            increase = true;
        }
        else if (currentValue == max)
        {
            increase = false;
        }

        int nextValue = increase == true ? currentValue + 1 : currentValue - 1;

        counter_battery2 = 0;
        batterycurrent.setValue(nextValue);
    }
    if(counter_amp % 200 == 0) // Every 0.25 seconds
    {
        int currentValue = solarcurrent.getValue();
        int max;
        int min;
        solarcurrent.getRange(min, max);

        if (currentValue == min)
        {
            increase = true;
        }
        else if (currentValue == max)
        {
            increase = false;
        }

        int nextValue = increase == true ? currentValue + 1 : currentValue - 1;

        counter_amp = 0;
        solarcurrent.setValue(nextValue);
    }
}
