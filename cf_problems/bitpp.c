#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int n,i,x=0;
    scanf("%d",&n);
    char op[n][3];
    for(i=0;i<n;i++){
        scanf("%s",op[i]);
        if(strcmp(op[i],"++X")==0||strcmp(op[i],"X++")==0){
            x++;
        }else if(strcmp(op[i],"--X")==0||strcmp(op[i],"X--")==0){
            x--;
        }
    }
    printf("%d",x);
    return 0;
}