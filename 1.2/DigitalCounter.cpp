#include "DigitalCounter.hpp"
#include <iostream>

using namespace std;

void DigitalCounter::Read()
{
    int x, y;
    do
    {
        cout << "Set the min "; cin >> x;
        cout << "Set the max "; cin >> y;
    }
    while(!Init(x, y));
}

bool DigitalCounter::Init(int x, int y)
{
    if(x < y)
    {
        set_min(x);
        set_max(y);
        set_actual(x);
        return true;
    }
    else
    {
        cout << "Incorrect data!" << endl;
        return false;
    }
}

void DigitalCounter::Display()
{
    int botton;
    do
    {
        cout << "MENU:\n1 - Show current value\n2 - Increase the count\n3 - Exit program" << endl;
        cin >> botton;
        switch(botton)
        {
            case 1:
                cout << "Actual count is " << get_actual() << endl;
                break;
            case 2:
                increaseCount();
                resetTool();
                cout << "Count increased to " << get_actual() << endl;
                break;
            case 3:
                cout << "Program terminated" << endl;
                break;
        }
    }
    while(botton != 3);
}

void DigitalCounter::increaseCount()
{
    int actual_count = get_actual();
    set_actual(++actual_count);
}

void DigitalCounter::resetTool()
{
    if(get_actual() == get_max())
    {
        set_actual(get_min());
    }
}
