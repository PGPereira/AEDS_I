#include <stdio.h>

int main (){
        #define timeunit 60

        int a[3], i, tempo;

        printf ("Por favor, escreva a quantidade de tempo em segundos à ser convertida.\n");
        scanf("%d", &tempo);
        
        for (i = 0; i < 3; i++){
                a[i] = tempo % timeunit;
                tempo /= timeunit;
        }

        printf ("Tempo convertido >>= %02d:%02d:%02d\n", a[2], a[1], a[0]);

        return 0;
}
