#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,k,i,pass;
    scanf("%d%d",&n,&k);

    //restrictions
    if(k>n)
    return 0;
    if(k<1||k>50||n<1||n>50)
    return 0;

    int a[51];
    pass=0;
    
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    i=0;
    while(i<k){
        if(a[i]>0){
            pass++;
        }
        i++;
    }

    while(a[k-1]==a[k]&&pass!=0&&a[k-1]!=0){
    pass++;
    k++;
    }

    printf("%d",pass);

    return 0;

}