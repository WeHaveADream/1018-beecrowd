#include <stdio.h>
#include <stdlib.h>


int main()
{
    int x = 0, cont = 0;

    scanf("%d", &x);

    printf("%d\n", x);

    while(x > 99){
        cont++;
        x = x - 100;
    }

    printf("%d nota(s) de R$ 100,00\n", cont);

    cont = 0;

    while(x > 49){
        cont++;
        x = x - 50;
    }

    printf("%d nota(s) de R$ 50,00", cont);

    cont = 0;

    while(x > 19){
        cont++;
        x = x - 20;
    }

    printf("\n%d nota(s) de R$ 20,00", cont);

    cont = 0;

    while(x > 9){
        cont++;
        x = x - 10;
    }

    printf("\n%d nota(s) de R$ 10,00", cont);


    cont = 0;

    while(x > 4){
        cont++;
        x = x - 5;
    }

    printf("\n%d nota(s) de R$ 5,00", cont);

    cont = 0;

    while(x > 1){
        cont++;
        x = x - 2;
    }

    printf("\n%d nota(s) de R$ 2,00", cont);

    cont = 0;

    while(x > 0){
        cont++;
        x = x - 1;
    }

    printf("\n%d nota(s) de R$ 1,00\n", cont);

    return 0;
}
