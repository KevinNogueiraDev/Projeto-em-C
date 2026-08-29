#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char nome[20];
    int matricula;
    char nomep1[20], nomep2[20], nomep3[20], nomep4[20], nomep5[20];
    float valor1, valor2, valor3, valor4, valor5;
    int qua1, qua2, qua3, qua4, qua5;
    float tot1, tot2, tot3, tot4, tot5, tott, tottd;
    
    printf("Digite o 1 nome do vendedor: \n");
    scanf("%s", nome);
    printf("Agora a matricula dele(a): \n");
    scanf("%i", &matricula);
    
    system("clear");
    
    printf("Qual o nome do 1 produto? \n");
    scanf("%s", nomep1);
    printf("Qual o valor do 1 produto? \n");
    scanf("%f", &valor1);
    printf("Qual a quantidade do 1 produto? \n");
    scanf("%i", &qua1);
    
    tot1 = valor1 * qua1;
    system("clear");
    
    printf("Qual o nome do 2 produto? \n");
    scanf("%s", nomep2); 
    printf("Qual o valor do 2 produto? \n");
    scanf("%f", &valor2);
    printf("Qual a quantidade do 2 produto? \n");
    scanf("%i", &qua2);
    
    tot2 = valor2 * qua2;
    system("clear");
    
    printf("Qual o nome do 3 produto? \n");
    scanf("%s", nomep3);
    printf("Qual o valor do 3 produto? \n");
    scanf("%f", &valor3);
    printf("Qual a quantidade do 3 produto? \n");
    scanf("%i", &qua3);
    
    tot3 = valor3 * qua3;
    system("clear");
    
    printf("Qual o nome do 4 produto? \n");
    scanf("%s", nomep4);
    printf("Qual o valor do 4 produto? \n");
    scanf("%f", &valor4);
    printf("Qual a quantidade do 4 produto? \n");
    scanf("%i", &qua4);
    
    tot4 = valor4 * qua4;
    system("clear");
    
    printf("Qual o nome do 5 produto? \n");
    scanf("%s", nomep5);
    printf("Qual o valor do 5 produto? \n");
    scanf("%f", &valor5);
    printf("Qual a quantidade do 5 produto? \n");
    scanf("%i", &qua5);

    tot5 = valor5 * qua5;
    tott = tot1 + tot2 + tot3 + tot4 + tot5;
    tottd = tott - (tott * 0.05);
    
    system("clear");
    
    printf("===============RECIBO==============\n");
    printf("Matricula do vendedor: %i\n", matricula);
    printf("Vendedor: %s\n", nome);
    printf("Itens da compra:==========\n");
    printf("%ix %s | Vlr unitario: %.2f| Total: %.2f\n", qua1, nomep1, valor1, tot1);
    printf("%ix %s | Vlr unitario: %.2f| Total: %.2f\n", qua2, nomep2, valor2, tot2);
    printf("%ix %s | Vlr unitario: %.2f| Total: %.2f\n", qua3, nomep3, valor3, tot3);
    printf("%ix %s | Vlr unitario: %.2f| Total: %.2f\n", qua4, nomep4, valor4, tot4);
    printf("%ix %s | Vlr unitario: %.2f| Total: %.2f\n", qua5, nomep5, valor5, tot5);
    printf("===================================\n");
    printf("Total sem desconto: %.2f\n", tott);
    printf("Total com desconto: %.2f\n", tottd);
    printf("=====================================");
    
    return 0;
} 

