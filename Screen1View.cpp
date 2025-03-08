#include <gui/screen1_screen/Screen1View.hpp>

Screen1View::Screen1View() 
{
    int i = 0;
    touchgfx_printf("Application is running through simulator! \n");
    touchgfx_printf("Print our value for integer i = %i \n", i);
}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::handleTickEvent()
{
    counter_mph++;
    counter_solar++;
    counter_ctemp++;
    counter_battery1++;
    counter_battery2++;
    counter_amp++;

    if(counter_mph % 15 == 0) // Every 0.25 seconds
    {
        int currentValue = textProgress.getValue();
        int max;
        int min;
        textProgress.getRange(min, max);

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
        textProgress.setValue(nextValue);
    }
    if(counter_solar % 60 == 0) // Every 0.25 seconds
    {
        int currentValue = textProgress_2.getValue();
        int max;
        int min;
        textProgress_2.getRange(min, max);

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
        textProgress_2.setValue(nextValue);
    }
    if(counter_ctemp % 88 == 0) // Every 0.25 seconds
    {
        int currentValue = textProgress_3.getValue();
        int max;
        int min;
        textProgress_3.getRange(min, max);

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
        textProgress_3.setValue(nextValue);
    }
    if(counter_battery1 % 103 == 0) // Every 0.25 seconds
    {
        int currentValue = textProgress_4.getValue();
        int max;
        int min;
        textProgress_4.getRange(min, max);

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
        textProgress_4.setValue(nextValue);
    }
    if(counter_battery2 % 166 == 0) // Every 0.25 seconds
    {
        int currentValue = textProgress_5.getValue();
        int max;
        int min;
        textProgress_5.getRange(min, max);

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
        textProgress_5.setValue(nextValue);
    }
    if(counter_amp % 200 == 0) // Every 0.25 seconds
    {
        int currentValue = textProgress_6.getValue();
        int max;
        int min;
        textProgress_6.getRange(min, max);

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
        textProgress_6.setValue(nextValue);
    }
}