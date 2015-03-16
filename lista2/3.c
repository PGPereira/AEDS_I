#include <stdio.h>

int main (){
        double real;
        
        scanf ("%lf", &real);

        printf ("Parte real: %d\n", (int) real);
        printf ("Parte fracionada: %0.6lf\n", real - (int)real);

        return 0;
}
