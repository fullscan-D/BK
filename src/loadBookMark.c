#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include "loadBookMark.h"

#define MAX_COMMAND 1024
#define MAX_PATH 1024

#define PATH "../usr/.bookmark"
void loadBookMark(char * name[MAX_COMMAND]){
    FILE *fp;
    char * buff;
    char * print_buff;
    char * buff_temp;
    int checkslash = 0, j=0, searchNUM = 1;

    buff = (char*)malloc(sizeof(char)*MAX_COMMAND);
    buff_temp = (char*)malloc(sizeof(char)*MAX_COMMAND);
    print_buff = (char*)malloc(sizeof(char)*MAX_COMMAND);

    fp = fopen(PATH,"r");
    while(fgets(buff,MAX_PATH,fp)!=NULL){
        if(buff!=NULL){
            for(int i =0; i<MAX_PATH;i++){
                if(buff[i] != '/'){
                    buff_temp[j]=buff[i];
                    j++;
                }
                else
                    break;
            }
            if(strcmp(name[2],buff_temp))
                searchNUM++;
            else
                break;
        }
        j=0;
        checkslash=0;
        memset(buff_temp,'\0',MAX_COMMAND);
    }
    fclose(fp);
    
    fp=fopen(PATH,"r");
    for(int i =0; i<searchNUM;i++){
        memset(buff,'\0',MAX_COMMAND);
        fgets(buff,MAX_PATH,fp);
    }
    //memset(buff_temp,'\0',MAX_COMMAND);
    j=0;
    for(int i =0; i<=MAX_PATH;i++){
        if(buff[i] == '/' && checkslash < 1)
            checkslash++;
        else if(checkslash ==1){
            buff_temp[j] = buff[i];
            j++;
        }
    }

    if(strlen(buff_temp)!=0)
        buff_temp[strlen(buff_temp)-1]='\0';
    char sh_buffer[1000];
    sprintf(sh_buffer, "source ./loadBookMark.sh %s", buff_temp);
    system(sh_buffer);

    /**************shell script**********/

    fclose(fp);
    free(buff);
    free(buff_temp);
    free(print_buff);
}
