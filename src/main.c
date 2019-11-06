#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "deleteBookMark.h"
#include "errorBookMark.h"
#include "saveBookMark.h"
#include "loadBookMark.h"
#include "listBookMark.h"
#include "initBookMark.h"
#include "stdbk.h"

int main(int args, char * argv[]){
    
    // command error
    if(errorBookMark(args) == -1){
        printf("Not command\n");
    }
    else if(errorBookMark(args) == 0)
        return 0;

    BOOKMARK_PATH = (char *)malloc(sizeof(char) * strlen(argv[1]) + 1);
    memset(BOOKMARK_PATH, 0, strlen(argv[1]));
    strncpy(BOOKMARK_PATH, argv[1], strlen(argv[1]));
    /* printf("%s\n", BOOKMARK_PATH); */

    // .bookmark init
    initBookMark();

    if (!strcmp(argv[2],"-s"))
        saveBookMark(argv[3]);
    else if (!strcmp(argv[2],"-i"))
        listBookMark(argv);
    else if(!strcmp(argv[2],"-l")) {
	    /* printf("%s\n", argv[1]); */
	    /* printf("%s %s\n", argv[1], argv[2]); */
	    /* printf("%s\n", argv[3]); */
        loadBookMark(argv[3]);
    }

    return 0;
}

