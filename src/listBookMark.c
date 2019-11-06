#include <stdio.h>
#include <stdlib.h>

#include "listBookMark.h"
#include "stdbk.h"

#define MAX_COMMAND 1024
void listBookMark(char * list[MAX_COMMAND]){
    FILE *fp;
    char * buff;
    int i = 1;

    buff = (char*)malloc(sizeof(char)*MAX_COMMAND);

    fp = fopen(BOOKMARK_PATH,"r");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n");
    printf("\t\t  [ Book Makr LIST ] \n");
    printf(" name | PATH \n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n");
    while(fgets(buff,MAX_COMMAND,fp) != NULL){
        if(buff != NULL && i == 1)
            ;
        else if(buff != NULL && i != 1)
            printf(" [%d] %s",i-1,buff);
        i++;
    }
    printf("--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n");
    fclose(fp);
    free(buff);

}

