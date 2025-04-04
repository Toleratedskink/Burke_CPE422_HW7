#!/bin/bash

config-pin p9_12 gpio
config-pin p9_12 out
i
config-pin p8_16 gpio_pu
config-pin p8_16 in

g++ ledButton.cpp -o ledButton
