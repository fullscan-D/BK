#!/bin/bash
if  [ "-i" == "$1" ]; then
    ./BK -i
elif [ "-s" == "$1" ]; then
    if [ -n "$2" ]; then
        ./BK -s $2
    else
        echo BK -s [name]
    fi
else
    echo $@ not command 
fi
