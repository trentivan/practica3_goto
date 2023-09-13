


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int num, adiv, intentos, reiniciar;
    srand(time(0));
    adiv= rand() % 100+1;
    inicio: 
        printf("bienvenido al juego de adivinanza\n");
    
    adivinanza:
        printf("dame un numero para adivinar el numero secreto entre 1 y 100\n");
        scanf("%d",& num);
    intentos++;
    if(num == adiv)
    {
        printf("FELICIDADES ADIVINASTE\tintentos:%d\n\n", intentos);
        goto reinicio; 
    }
    if(num > adiv)
    {
        printf("el numero a adivinar es menor\n");
        goto adivinanza;
    }
    if(num < adiv)
    {
        printf("el numero a adivinar es mayor\n");
        goto adivinanza;
    }
    
    reinicio:
        printf("quieres volver a jugar?  (1. si | 2. no)\n");
        scanf("%d",& reiniciar);
        if(reiniciar != 1 && reiniciar != 2)
        {
            goto reinicio;
        }
        if(reiniciar==1)
        {
            goto inicio;
        }
        if(reiniciar == 2)
        {
            printf("gracias por jugar");
        }

    return 0;
}