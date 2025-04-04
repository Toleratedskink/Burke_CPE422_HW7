#include "myGpio.h"

MYGPIO::MYGPIO(int num) {
    number = num;
    path = "/sys/class/gpio/gpio" + to_string(number) + "/";
}

void MYGPIO::write(string filename, string value) {
    ofstream file(path + filename);
    file << value;
    file.close();
}

void MYGPIO::write(string filename, int value) {
    ofstream file(path + filename);
    file << value;
    file.close();
}

string MYGPIO::read(string filename) {
    ifstream file(path + filename);
    string value;
    file >> value;
    return value;
}

int MYGPIO::getNumber() {
    return number;
}

void MYGPIO::setDirection(string dir) {
    write("direction", dir);
}

string MYGPIO::getDirection() {
    return read("direction");
}

void MYGPIO::setValue(int val) {
    write("value", val);
}

int MYGPIO::getValue() {
    return stoi(read("value"));
}

void MYGPIO::toggleOutput() {
    int currentValue = getValue();
    setValue(currentValue == 0 ? 1 : 0);
}

void MYGPIO::toggleOutputNumberOfTimes(int n, int delay) {
    for (int i = 0 ; i < n; i++) {
    toggleOutput();
    }
}
