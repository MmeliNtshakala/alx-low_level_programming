#!/bin/bash
wget -P .. https://raw.githubusercontent.com/MmeliNtshakala/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libigi.so
export LD_PRELOAD="$PWD/../libigi.so"
