#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    if(n<1||n>1000){
        return 0;
    }
    int prob[3][n];
    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            scanf("%d",&prob[i][j]);
            if(prob[i][j]!=0&&prob[i][j]!=1){
                return 0;
            }
        }
    }
    int ct_prb=0;
    int ct=0;
    i=0;
    while(i<=n){
        ct=0;
        j=0;
        while(j<3){
            ct+=prob[i][j];
            j++;
        }
        if(ct>=2){
            ct_prb++;
        }
        i++;
    }
    printf("%d",ct_prb);
    return 0;
}