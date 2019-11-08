#include <stdio.h>

#include "initBookMark.h"
#include "stdbk.h"

int initBookMark(){
    FILE * fp;
    FILE * ffp;

    fp = fopen(BOOKMARK_PATH,"r");
    if(fp != NULL){
        fclose(fp);
        return 0;
    }
    else{
        fp = fopen(BOOKMARK_PATH,"w");
        fprintf(fp,"*****^THIS__IS__BOOKMARK__FOR__BK^****\n");
        fclose(fp);
    }
    return 0;
}
