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
  valueFile << "0";
  valueFile.close();
}

int main(){
  cout << "Turning off LED with transistor" << endl;
  turnOnLED();
  cout << "LED OFF!" << endl;
  return 0;
}
