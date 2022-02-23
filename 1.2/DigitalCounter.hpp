#pragma once
#include <string>

using namespace std;

class DigitalCounter
{
private:
    int min, max, actual;
    
public:
    void Read();
    void Display();
    bool Init(int, int);
    void increaseCount();
    void resetTool();
    int get_min() {return min;};
    int get_max() {return max;};
    int get_actual() {return actual;};
    void set_min(int value) {min = value; };
    void set_max(int value) {max = value; };
    void set_actual(int value) {actual = value; };
};
