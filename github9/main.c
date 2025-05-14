#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

// Sa se realizeze un program C care verifica daca n este par sau impar.
//operatori pe biti

int main()
{
    int n;
    printf("Introduceti o valoare:");
    scanf("%d",&n);
    if(n & 1){ /*Dacă folosești expresia n & 0, atunci rezultatul va fi întotdeauna 0,
                indiferent de valoarea lui n. Acest lucru se întâmplă deoarece orice număr "AND" cu 0 este
                întotdeauna 0.*/
        printf("Numarul este impar!");
    }else{
        printf("Numarul este par!");
    }

   getch();
    return 0;
}
