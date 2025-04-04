#include <iostream>
#include <fstream>
#include <iostream>
using namespace std;

void turnOnLED()
{
  string path = "/sys/class/gpio/gpio60/";

  ofstream directionFile(path + "direction");
  directionFile << "out";
  directionFile.close();

  ofstream valueFile(path + "value");
  valueFile << "1";
  valueFile.close();
}

int main(){
  cout << "Turning on LED with transistor" << endl;
  turnOnLED();
  cout << "LED ON!" << endl;
  return 0;
}
