#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{   
    int n;
    scanf("%d",&n);
    char str[n][101],first,last,btw_lnch[10];
    int btw_ln;
    if(n<1||n>100){
        return 0;
    }

    int i=0;
    while(i<n){
        scanf("%s",str[i]);
        i++;
    }
    i=0;
    while(i<n){
        if(strlen(str[i])>10){
            first=str[i][0];
            last=str[i][strlen(str[i])-1];
            btw_ln=(strlen(str[i]))-2;
            //printf("btw_ln:%d\n",btw_ln);
            sprintf(btw_lnch, "%d", btw_ln);
            //printf("btw_lnch:%s\n",btw_lnch);
            strcpy(str[i],"");
            strncat(str[i],&first,1);
            strcat(str[i],btw_lnch);
            strncat(str[i],&last,1);
        }
        i++;
    }
    i=0;
    while(i<n){
        printf("%s\n",str[i]);
        i++;
    }
    return 0;
}