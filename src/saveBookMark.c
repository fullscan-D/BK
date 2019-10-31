#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include "saveBookMark.h"

#define MAX_BOOKMARK 100
#define MAX_PATH 1024
void saveBookMark(char * name[]){
    FILE * fp;
    char * buff;
    char * PATH;
    char path[MAX_PATH];
    int checkslash = 0,j=0,flag=0;
    
    buff=(char*)malloc(sizeof(char)*MAX_BOOKMARK);
    PATH = (char*)malloc(sizeof(char)*MAX_PATH);
    getcwd(path,MAX_PATH);
    fp = fopen("../usr/.bookmark","r");
    fgets(buff,MAX_BOOKMARK,fp);

    //check list
    while(fgets(buff,MAX_PATH,fp) != NULL){
        if(buff != NULL){
            for(int i=0; i<MAX_PATH; i++){
                if(buff[i] != '/' && checkslash <2){
                    PATH[j] = buff[i];
                    j++;
                }
                else if(buff[i] == '/') checkslash++;
                if(checkslash == 2) break;
            }
            if(!strcmp(name[2],PATH)){
                flag = 1;
                break;
            }
            j=0;
            checkslash=0;
            memset(PATH,'\0',MAX_PATH);
        }
    }
    fclose(fp);

    // exist || not exist
    if(flag==1) printf("\"%s\" already exists.\n",PATH);
    else
    {
        fp=fopen("../usr/.bookmark","a");
        fprintf(fp,"%s/%s\n",name[2],path);
        fclose(fp);
    }
    free(buff);
    free(PATH);
}
