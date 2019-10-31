#include <stdio.h>
#include <string.h>

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

    if (!strcmp(argv[1],"-s"))
        saveBookMark(argv);

    printf("argv : %s", argv[2]);
    return 0;
}

