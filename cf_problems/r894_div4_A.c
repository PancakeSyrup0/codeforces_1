#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int t,i,j,k,true=0;
    char temp[3],temp_ch;
    scanf("%d",&t);
    char cards[t][3];
    for(i=0;i<t;i++){
        scanf("%s",cards[i]);
        strcpy(temp,cards[i]);


        if(strcmp(temp,"abc")==0){
            printf("YES");
        }else{
            for(j=0;j<3;j++){
                for(k=0;k<3;k++){
                    if(k==j){
                        //-
                    }else{
                        temp_ch=temp[j];
                        temp[j]=temp[k];
                        temp[k]=temp_ch;
                        if(strcmp(temp,"abc")==0){
                            printf("YES");
                            true=1;
                            break;
                        }
                    }
                }
                if(true==0){
                    printf("NO");
                }else{
                    true=0;
                }
            }
        }

    }
    return 0;
}