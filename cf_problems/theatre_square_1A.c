#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
    double result;
    int m,n,a,intresult;

    scanf("%d%d%d",&m,&n,&a);
    result = ceil(m-a)*ceil(n-a);
    intresult = (int)result;
    printf("%d",intresult);
}