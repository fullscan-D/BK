#!/bin/bash
# bkpath="$HOME/BK/src"
# if [[ "$PATH" =~ "$bkpath" ]]; then
	# PATH="$bkpath:$PATH"
# fi
BOOKMARKPATH="$HOME/.bookmark"
if [ -n "$BOOKMARKPATH" ]; then
    BOOKMARKPATH="$HOME/.bookmark"
fi

# echo "$bkpath"
# echo "$PATH"

str=""
if  [ "-i" == "$1" ]; then
	bookmark $BOOKMARKPATH -i
elif [ "-s" == "$1" ]; then
    if [ -n "$2" ]; then
	    bookmark $BOOKMARKPATH -s $2
    else
        echo "bookMark.sh -s [name]"
    fi
elif [ "-l" == "$1" ]; then
	str=`bookmark $BOOKMARKPATH -l $2`
fi
cd $str
