#include<stdio.h>

int main (){
        const unsigned short int notas[7] = {100, 50, 20, 10, 5, 2, 1};
        unsigned short int quantidade[7], i;
        unsigned int troco;

        scanf ("%u", &troco);
        
        for (i = 0; i < 7; i++){
                quantidade[i] = troco / notas[i];
                troco = troco % notas[i];
        }

        for (i = 0; i < 7; i++){
                printf ("%0hu notas de %0hu\n", quantidade[i], notas[i]);
        }

        return 0;
}
