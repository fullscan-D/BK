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
    else if(errorBookMark(args) == 0)
        return 0;

    // .bookmark init
    initBookMark();

    if (!strcmp(argv[1],"-s"))
        saveBookMark(argv);
    else if (!strcmp(argv[1],"-i"))
        listBookMark(argv);
    else if(!strcmp(argv[1],"-l"))
        loadBookMark(argv);

    return 0;
}

