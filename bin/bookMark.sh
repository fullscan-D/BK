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
    cd $str
elif [ "-h" == "$1" ]; then
    echo Bookmark save : BK -s bookmarkName
    echo Bookmark list : BK -i
    echo Bookmark load : BK -l bookmarkName
    echo Bookmark help : BK -h
else
    echo BK $@ is not command
fi
