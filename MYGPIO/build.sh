!#/bin/bash

config-pin p9_12 gpio
config-pin p9_12 out

config-pin p8_16 gpio
config-pin p8_16 in

g++ myGpio.cpp -o myGpio
g++ myGpioApp.cpp -o myGpioApp
