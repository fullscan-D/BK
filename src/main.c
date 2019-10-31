#include <stdio.h>

#include "deleteBookMark.h"
#include "errorBookMark.h"
#include "saveBookMark.h"
#include "loadBookMark.h"
#include "listBookMark.h"

int main(int args, char * argv[]){
    if(errorBookMark(args) == -1){
        printf("Not command\n");
    }
    return 0;
}

