#include <fstream>
#include <iostream>
using namespace std;

int main()
{
  string ledPath = "/sys/class/gpio/gpio60/";
  string buttonPath = "/sys/class/gpio/gpio46/value";
  while(true){
    if(buttonPath == "1"){
      ofstream valueFile(ledPath + "value");
      valueFile << "0";
      valueFile.close();
    }
    else{
      ofstream valueFile(ledPath + "value");
      valueFile << "1";
      valueFile.close();
    }
  }
  return 0;
}
