#include <iostream>
#include "DigitalCounter.hpp"
using namespace std;

DigitalCounter makeDigitalCounter(int x, int y)
{
    DigitalCounter n;
    if (!n.Init(x, y))
    {
        cout << "Wrong arguments to Init!" << endl;
    }
    return n;
}

int main() {
    DigitalCounter n1;
    n1.Read();
    n1.Display();
    
    DigitalCounter n;
    int x, y;
    cout << "Set the min "; cin >> x;
    cout << "Set the max "; cin >> y;
    n = makeDigitalCounter(x, y);
    n.Display();

    return 0;
}
