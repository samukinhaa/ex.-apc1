#include <stdio.h> 

int main() {
    // imprime um texto
    printf("um texto sempre em aspas duplas\n");
    // imprime um número inteiro
    printf("%i\n", 10);
    printf("%i %i\n", 11, 22);
    printf("%5i\n", 110);
    printf("%05i\n" , 1);
    // imprime um número em decimal
    printf("%f\n", 3.1415);
    printf("%10.2f\n", 10155.5888);
    // imprime um caractere aspas simples
    printf("%c\n",'A');
    printf( "%c\n", 68);
    // impreme uma string
    printf("%s\n", "bom dia");
    printf("%-30s!\n","Quero cafe");
    
    return 0;
}