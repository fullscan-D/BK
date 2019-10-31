#include <stdio.h>

#include "initBookMark.h"

int initBookMark(){
    FILE * fp;
    fp = fopen("../usr/.bookmark","r");
    if(fp != NULL){
        return 0;
        fclose(fp);
    }
    else{
        fclose(fp);
        fp = fopen("../usr/.bookmark","a");
        fprintf(fp,"*****^THIS__IS__BOOKMARK__FOR__BK^****\n");
    }
    fclose(fp);
    return 0;
}
