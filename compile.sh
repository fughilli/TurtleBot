#!/bin/bash

cd ./LinuxI2C
./compile.sh
cd ../Servo
./compile.sh
cd ..
g++ -c ServoUnitTest.cpp -I./LinuxI2C -I./Servo

g++ ServoUnitTest.o ./LinuxI2C/linux_i2c.o ./Servo/Servo.o -o ServoUnitTest.a
