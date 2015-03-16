#include <stdio.h>
#include <math.h>

int main(){
        #define pi 3.141592
        int raio;
        
        scanf ("%d", &raio);

        printf ("Área: %lf\n", pow(raio, 2) * pi);
        printf ("Perímetro: %lf\n", raio * 2 * pi);

        return 0;
}
