#!/bin/bash
# bkpath="$HOME/BK/src"
# if [[ "$PATH" =~ "$bkpath" ]]; then
	# PATH="$bkpath:$PATH"
# fi
if [ -z "$BOOKMARKPATH" ]; then
    BOOKMARKPATH="$HOME/.bookmark"
fi

# echo "$bkpath"
# echo "$PATH"

str=""
if  [ "-i" == "$1" ]; then
	BK $BOOKMARKPATH -i
elif [ "-s" == "$1" ]; then
    if [ -n "$2" ]; then
	    BK $BOOKMARKPATH -s $2
    else
        echo "bookMark.sh -s [name]"
    fi
elif [ "-l" == "$1" ]; then
	str=`BK $BOOKMARKPATH -l $2`
fi
echo $str
