#include <stdio.h>
#include <stdlib.h>
int main(){
    int M,N,i,j,dom=0;
    scanf("%d%d",&M,&N);
    if(M<1||M>16||N<1||N>16)
        return 0;
    
    
    //-----M,N are odd
    if(N%2!=0&&M%2!=0){
        dom=((M-1)/2)*N;
        dom=dom+((N-1)/2);
    }
    //-----M,N are even
    if(N%2==0&&M%2==0){
        dom=(M/2)*N;
    }
    //-----M is odd, N is even
    if(N%2==0&&M%2!=0){
        dom=(M)*(N/2);
    }    
    //-----M is even, N is odd
    if(N%2!=0&&M%2==0){
        dom=(M/2)*N;
    }
    printf("%d",dom);


}