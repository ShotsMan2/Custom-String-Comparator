#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
        char str1[99],str2[99];
    int i,j;

    printf("str1 i girin ");
    scanf("%s",str1);

    printf("str2 i girin");
    scanf("%s",str2);

    i=0;

        while(str1[i]==str2[i] && str1[i]!='\0'){
            i++;
        }




            if(str1[i]>str2[i]){
                printf("str 1 daha buyuk");
            }
            else if(str2[i]>str1[i]){
                printf("str2 daha buyuk");
            }
            else{
                printf("esittir.");
            }
}
