#include "myGpio.h"
#include <iostream>

using namespace std;

int main() {
    MYGPIO led(60);  // p9.12
    MYGPIO button(46); // p8.16

    led.setDirection("out");
    button.setDirection("in");
    cout << "Setting LED high for 3 seconds..." << endl;
    led.setValue(1);
    cout << "LED Value: " << led.getValue() << endl;

    cout << "Setting LED low..." << endl;
    led.setValue(0);
    cout << "LED Value: " <<
    led.getValue() << endl;
    cout << "Reading button state: " << button.getValue() << endl;

    return 0;
}

