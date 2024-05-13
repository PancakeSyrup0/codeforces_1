/*i have no fucking idea how i made this problem work but i thought the solution was kinda obv, so obv
that i kinda did it the hard way thinking it was a trick question at first and failed miserably*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char name[101];
    int l,freq=0,i,j;



    scanf("%s",name);
    l=strlen(name);
    //printf("\nlength of the string:%d\n",l);

    i=0;
    while(name[i]!='\0'){
        j=0;
        //printf("\nCHECKING %c with:\n",name[i]);
        while(name[j]!='\0'){
          //  printf("\n %c \n",name[j]);
            if(i!=j){
                if(name[j]==name[i]&&name[i]!='0'){
                    freq++;
               //     printf("\nfreq:%d\n",freq);
                    name[j]='0';
                }
            }
            j++;
        }
        i++;
        l-=freq;
        //printf("\nl:%d\n",l);
        freq=0;
    }

    if(l%2!=0){
        printf("IGNORE HIM!");
    }else{
        printf("CHAT WITH HER!");
    }





    return 0;
}