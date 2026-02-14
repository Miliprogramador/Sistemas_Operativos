#include <stdio.h>

int main() { 
    int base, altura;
    printf("Ingrese la base del rectangulo: ");
    scanf("%d", &base);
    printf("Ingrese la altura del rectangulo: ");
    scanf("%d", &altura);
    
    int area = base * altura;
    printf("El area del rectangulo es: %d\n", area);
    return 0;
}