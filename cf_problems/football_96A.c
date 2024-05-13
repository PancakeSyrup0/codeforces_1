#include <stdio.h>
#include <stdlib.h>
int main()
{
    char P[100],ch;
    int k,count=0,danger=0;

    scanf("%s",P);

    int i=0;
    while(P[i]!='\0'){
        ch=P[i];
        if(ch==P[i+1]){
            k=i;
            count=0;
            while(P[k]==ch){
                count++;
                if(count>=7){
                    danger=1;
                    break;
                }
                k++;
            }
        }
        i++;
    }

    if(danger==1){
        printf("YES");

    }else{
        printf("NO");
    }
    return 0;
}