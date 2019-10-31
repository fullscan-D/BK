#include <stdio.h>

#include "deleteBookMark.h"
#include "errorBookMark.h"
#include "saveBookMark.h"
#include "loadBookMark.h"
#include "listBookMark.h"
#include "initBookMark.h"

int main(int args, char * argv[]){
    

    // command error
    if(errorBookMark(args) == -1){
        printf("Not command\n");
    }

    // .bookmark init
    initBookMark();

    return 0;
}

