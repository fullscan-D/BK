#!/bin/bash
str=""
if  [ "-i" == "$1" ]; then
    ./BK -i
elif [ "-s" == "$1" ]; then
    if [ -n "$2" ]; then
        ./BK -s $2
    else
        echo BK -s [name]
    fi
elif [ "-l" == "$1" ]; then
    while read temp; do
        if [ -z "$temp" ]; then continue; 
        fi
            echo hi
            str="${temp%%/*}"
            if [ "$str" == "$2" ]; then
                str="${temp#*/}"
                break;
            fi
        done < ../usr/.bookmark 
    else
        echo $@ not command 
fi
cd $str
