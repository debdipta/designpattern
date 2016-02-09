#!/bin/bash

clean()
{
    clear
    echo "Removing log files"
    if [[ -f "/tmp/logger/logger.log" ]]
    then
        rm -f "/tmp/logger/logger.log"
    fi
    
}

##MAIN
#
clean
echo "Cleaning previous build"
make clean

echo "Start building"
make
