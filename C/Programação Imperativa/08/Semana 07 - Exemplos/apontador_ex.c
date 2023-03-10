/*****************************************
	Exemplo do Uso de ponteiros
*****************************************/
/*
      &var -> refere-se ao endereço da variável Var
      *pnt -> refere-se ao conteúdo apontado pelo ponteiro Pnt (D-referenciação)
*/
/*
      Dá para usar a manipulação dos valores de endereços passados em funções como o retorno da função (como a função scanf faz)
      Seria a passagem por referência (diferente da passagem por valor)
*/
/*
#include  <stdio.h> 

int main( )
{
      int x = 10, y, *px;

	px  = &x;
	y  = *px + 1;

	printf("conteudo de y = %d / endereco de y = %x\n",y, &y);
	printf("conteudo de x = %d / endereco de x = %x\n",x,&x);
  printf("px = %x\n",px);
  printf("endereco de px = %x\n",&px);
  return 0;
		
}
*/
/*
#include <stdio.h>


int pos_neg (int);

int main()
{
  int valor, sinal;
  
  puts("Entre com um valor inteiro positivo ou negativo");
  scanf("%d", &valor); 
  sinal = pos_neg(valor);
  if (sinal != 0)
     puts(" O valor e positivo\n");
  else
     puts(" O valor e negativo\n");
  return 0;
}

// funçao testa sinal
int pos_neg (int val){

	if (val < 0)
		return 0;
	else
		return 1;
}
*/
/*
#include <stdio.h>


int pos_neg (int*);

int main()
{
  int valor, sinal;
  
  puts("Entre com um valor inteiro positivo ou negativo");
  scanf("%d", &valor); 
  sinal = pos_neg(&valor);
  if (sinal != 0)
     puts(" O valor e positivo\n");
  else
     puts(" O valor e negativo\n");
  return 0;
}
// função testa sinal
int pos_neg (int *val){

	if (*val < 0)
		return 0;
	else
		return 1;
}
*/
/*
#include <stdio.h>


int soma_intervalo (int, int);

int main(int argc, char *argv[])
{
  int valor_1, valor_2, resultado;
  
  puts("entre com o primeiro valor");
  scanf("%d", &valor_1); 
  puts("entre com o segundo valor");
  scanf("%d", &valor_2); 
  // chamada da fubnção
  resultado = soma_intervalo( valor_1, valor_2);
  printf("A soma dos elementos do intervalo e: %d\n", resultado);
  return 0;
}
// soma valores do intervalo
int soma_intervalo (int val_1, int val_2){
    
    int i, soma = 0;
    
    if (val_1 >= val_2)
       return soma;
    else{   
       for (i = val_1+1; i< val_2; i++)
           soma += i;
       return soma;
    }
}
*/
/*
#include <stdio.h>


int soma_intervalo (int *, int *);

int main()
{
  int valor_1, valor_2, resultado;
  
  puts("entre com o primeiro valor");
  scanf("%d", &valor_1);
  puts("entre com o segundo valor");
  scanf("%d", &valor_2); 
  // chamada da fubnção
  resultado = soma_intervalo( &valor_1, &valor_2);
  printf("A soma dos elementos do intervalo e: %d\n", resultado);
   return 0;
}
// soma valores do intervalo
int soma_intervalo (int *val_1, int *val_2){
    
    int i, soma = 0;
    
    if (*val_1 >= *val_2)
       return soma;
    else{   
       for (i = (*val_1)+1; i< (*val_2); i++)
           soma += i;
       return soma;
    }
}
*/
/*
#include <stdio.h>
#i

int soma_intervalo(int, int, int);

int main(){
  
  int valor_1, valor_2, valor_3, result;
  
  puts("Entre com o valor de a");
  scanf("%d", &valor_1); 
  puts("Entre com o valor de b");
  scanf("%d", &valor_2);
  puts("Entre com o valor c");
  scanf("%d", &valor_3);
  // chamada da função
  result = soma_intervalo(valor_1, valor_2, valor_3);
  printf(" A soma do intervalo e: %d\n", result);
  return 0;
}
// Soma valor do intervalo
int soma_intervalo(int a, int b, int c){
    
    int i, soma = 0;
    
    if (b >= c)
       return soma;
    else{   
       for (i = b; i<= c; i++){
           if ((i%a) == 0)
             soma += i;
       }    
       return soma;
    }
}
*/
/*
#include <stdio.h>


int soma_intervalo(int *, int *, int *);

int main(){
  
  int valor_1, valor_2, valor_3, result;
  
  puts("Entre com o primeiro valor");
  scanf("%d", &valor_1);
  puts("Entre com o segundo valor");
  scanf("%d", &valor_2); 
  puts("Entre com o terceiro valor");
  scanf("%d", &valor_3); 
  // chamada da função
  result = soma_intervalo(&valor_1, &valor_2, &valor_3);
  printf(" A soma do intervalo e: %d\n", result);
  return 0;
}
// Soma valor do intervalo
int soma_intervalo(int *a, int *b, int *c){
    
    int i, soma = 0;
    
    if (*b >= *c)
       return soma;
    else{   
       for (i = *b; i<= *c; i++){
           if ((i% *a) == 0)
             soma += i;
       }    
       return soma;
    }
}
*/
/*
#include <stdio.h>


void calcula_hora (int);

int main()
{
  int segundos;
  
  puts(" Entre com o valor em segundos");
  scanf("%d", &segundos); 
  calcula_hora(segundos);
  return 0;
}
// função que converte segundos
// em horas:minutos:segundos
void calcula_hora (int seg){
     
     int h, m, s, r;
     
     h = seg / 3600;
     r = seg % 3600;
     m = r / 60;
     s = r % 60;
     printf("%d:%d:%d\n",h,m,s);
}
*/
/*
#include <stdio.h>


void calcula_hora (int *, int *, int *, int *);

int main()
{
  int hora, min, seg;
  int segundos;
  
  puts(" Entre com o valor em segundos");
  scanf("%d", &segundos); 
  calcula_hora(&segundos, &hora, &min, &seg);
  printf("%d:%d:%d\n",hora,min,seg);
  return 0;
}
// função que converte segundos
// em horas:minutos:segundos
void calcula_hora (int *seg, int *h, int *m, int *s){
     
    int r;
     
     *h = *seg / 3600;
     r = *seg % 3600;
     *m = r / 60;
     *s = r % 60;
 }
*/
/*
#include <stdio.h>

// Funções para manipulação de vetores
int ler_vetor(int *);
void imprime_vetor(int *);

#define MAX 10

int main(){
 
 int vetor[MAX], erro=1;
  
erro = ler_vetor(vetor); 
if (erro != 0)
     puts("Erro na leitura do vetor\n");
  else   
     imprime_vetor(&vetor[0]); 
  return 0;
}
// Função para leitura do vetor de inteiros

int ler_vetor(int *vet){
    
    int i;
    
    puts(" Entre com os valores do vetor\n");
    for (i=0; i< MAX; i++){
        printf("Vetor[%d]= ", i);
        scanf("%d",(vet+i)); 
    }    
    return 0;
} 

// Função para imprimir o vetor de inteiros

void imprime_vetor (int *vet){
     
     int i;
     
      printf(" Vetor= ");
      for (i=0; i< MAX; i++)
        printf("%d, ",*(vet+i));
      printf("\n");
} 
*/
/*
#include <stdio.h>

// Funções para manipulação de vetores
int ler_vetor(int *);
void imprime_vetor(int *);

#define MAX 10

int main(){
 
 int vetor[MAX], erro=1;
  
erro = ler_vetor(vetor); 
if (erro != 0)
     puts("Erro na leitura do vetor\n");
  else   
     imprime_vetor(&vetor[0]);
   return 0;
}
// Função para leitura do vetor de inteiros

int ler_vetor(int *vet){
    
    int i;
    
    puts(" Entre com os valores do vetor\n");
    for (i=0; i< MAX; i++){
        printf("Vetor[%d]= ", i);
        scanf("%d",&vet[i]); 
    }    
    return 0;
} 

// Função para imprimir o vetor de inteiros

void imprime_vetor (int *vet){
     
     int i;
     
      printf(" Vetor= ");
      for (i=0; i< MAX; i++)
        printf("%d, ",vet[i]);
      printf("\n");
} 
*/
/*
#include <stdio.h>

// Funções para manipulação de matrizes
int ler_matriz(float *);
void imprime_matriz(float *);

#define LINHA 2
#define COLUNA 2
int main(){
 float matriz[LINHA][COLUNA];
  int erro=1;
  
  erro = ler_matriz(&matriz[0][0]);
  if (erro != 0)
     puts("Erro na leitura da matriz\n");
  else   
     imprime_matriz(&matriz[0][0]);
   return 0;
}
// Função para leitura do vetor de inteiros
int ler_matriz(float *mat){
    
    int i,j;
    
    puts(" Entre com os valores da matriz\n");
    for (i=0; i<LINHA; i++)
     for (j=0; j<COLUNA; j++){
        printf("Matriz[%d][%d]= ", i,j);
        scanf("%f",mat+(i*COLUNA+j)); 
    }    
    return 0;
} 
// Função para imprimir o vetor de inteiros
void imprime_matriz(float *mat){
     
     int i, j;
     
      printf(" Matriz \n");
      for (i=0; i<LINHA; i++){
        for (j=0;j<COLUNA; j++)
          printf("%.1f ", *(mat+(i*COLUNA+j)));
        printf("\n");           
     }    
      
} 
*/
/*
#include  <stdio.h> 

struct movimento {
		long	numero;
		double	valor;
		char	codigo;
	};
	
void novo_mov(struct movimento *);

int main(){
	
    struct movimento reg_mov;
	
    novo_mov(&reg_mov);
    printf("Numero: %ld\n", reg_mov.numero);
    printf("Valor: %f\n",reg_mov.valor); 
    printf("Código: %c\n",reg_mov.codigo);
    return 0;
}
void novo_mov(struct movimento *pt_mov){

	pt_mov->numero = 9999;
	pt_mov->valor = 1000.00;
	pt_mov->codigo = 'c';
}
*/
