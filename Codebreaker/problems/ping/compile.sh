#!/bin/bash
g++ grader.cpp ping.cpp -o ping -Wall -static -O2 -lm -m32 -s -w -std=gnu++14 -fmax-errors=512


