#include <stdio.h>

#include "initBookMark.h"

void initBookMark(){
    FILE * fp;
    fp = fopen("../usr/.bookmark","a+");
    fclose(fp);
}
