#include <stdio.h>
#include <stdlib.h>
int main()
{
    int M[6][6],i,j,iloc,jloc,moves;

    //input matrix
    for(i=1;i<6;i++){
        for(j=1;j<6;j++){
            scanf("%d",&M[i][j]);
            //find 1
            if(M[i][j]==1){
                //store location
                iloc=i;
                jloc=j;
            }
        }
    }

    moves = abs(iloc-3) + abs(jloc-3);
    printf("%d",moves);
    

}