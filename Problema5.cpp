#include <stdio.h>

int calculeazaSuma(int vect[], int n)
{
    if (n<=0) {
        return 0;
    }
    return (calculeazaSuma(vect, n-1) + vect[n-1]);
}


int main()
{
    int vect[100];
    int n, i, suma;

    printf("Dimensiunea vectorului: ");
    scanf("%d", &n);
    while(n<1){
        printf("\nDimensiunea trebuie sa fie minim 1. Dimensiunea vectorului: ");
        scanf("%d", &n);
    }

    for(i=0; i<n; i++){
        printf("Introduceti elementul %d: ", i+1);
        scanf("%d", &vect[i]);
    }

    suma = calculeazaSuma(vect, n);
    printf("Suma elementelor vectorului: %d", suma);

    return 0;
}



