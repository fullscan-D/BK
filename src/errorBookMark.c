#include <stdio.h>
#include "errorBookMark.h"

int errorBookMark(int args){
    if(args >= 2)
        return 1;
    else if(args == 1)
        return 0;
    else    
        return -1;
}
