#include <stdio.h>


int soma(int n1, int n2) 
{
  int soma1;
  soma1= n1 + n2;
  return(soma1); 
}
int subtracao(int n1, int n2) 
{
  int subtracao1;
  subtracao1 = n1 - n2;
  return(subtracao1); 
}
int divisao(int n1, int n2) 
{
  int divisao1;
  divisao1 = n1 / n2;
  return(divisao1); 
}
int multiplicacao(int n1, int n2) 
{
  int multiplicacao1;
  multiplicacao1 = n1 * n2;
  return(multiplicacao1);
}

int main()
{
    char op;
    int n1, n2, soma1, subtracao1, divisao1, multiplicacao1;
    int *p1, *p2;
    
    p1 = &n1;
    p2 = &n2;

    printf("Bem-vindo à nossa calculadora!\n");

    do {
        printf("\nQual operação você deseja realizar?\n");
        printf("Adição (+), Subtração (-), Multiplicação (*) ou Divisão (/)?\n");
        printf("Para encerrar, digite P.\n");

        scanf(" %c", &op);

        if(op == 'P') {
            break;
        }

        printf("Digite o primeiro número: \n");
        scanf("%d", p1);

        printf("Digite o segundo número: \n");
        scanf("%d", p2);

        switch(op){
            case '+':
                printf("Resultado da Operação: %d\n", soma(*p1,*p2));
                
                break;

            case '-':
                printf("Resultado da Operação: %d\n", subtracao(*p1,*p2));
                break;

            case '*':
                printf("Resultado da Operação: %d\n", multiplicacao(*p1,*p2));
                break;

            case '/':
                printf("Resultado da Operação: %d\n", divisao(*p1,*p2));
                break;

            default:
                printf("Operação inválida. Tente novamente.\n");
                break;
                
        }
    
    } while(op != 'P');

    printf("Obrigado por usar nossa calculadora!\n");

    return 0;
}