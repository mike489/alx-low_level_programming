#!/bin/bash
wget -P /tmp https://github.com/mike489/alx-low_level_programming/raw/master/0x18-dynamic_libraries/nrandomm.so
export LD_PRELOAD=/tmp/nrandomm.so
