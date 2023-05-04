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
    int n1, n2, soma1,subtracao1,divisao1, multiplicacao1;
    int *p1, *p2;
    
    p1 = &n1;
    p2 = &n2;
    
    printf("Digite o primeiro número:");
    scanf("%d", p1);
    printf("Digite o segundo número:");
    scanf("%d", p2);
    
    
    
    printf("Soma dos valores: %d", soma(*p1,*p2));
    printf("\nSubtração dos valores: %d", subtracao(*p1,*p2));
    printf("\nMultiplicação dos valores: %d", multiplicacao(*p1,*p2));
    printf("\nDivisão dos valores: %d", divisao(*p1,*p2));
    
    return 0;
}