/*
	Name: Fibonacci2
	Author: Fabio.Fonts 
	Date: 01/09/25 08:50
	Description: progama para exibir a famosa sequência de Fibonacci
*/
 #include<windows.h>
 #include<stdio.h>
 #include<locale.h>
 
 main()
 
 {
    setlocale(LC_ALL,"portuguese");
    int request;
    long int ant, atual, prox;
    request = 0;
    prox=0;
    ant = atual =1;
    printf("digite a quantidades de elementos"); scanf("%d", &request);
    printf("[%lld] [%lld] ", ant, atual);
    int i =0;
 
    while( (request - 2)> 0){
    	prox = ant + atual;
    	ant = atual;
    	atual = prox;
    	printf(" [%lld]", atual);
    	request--;
	}
 
 	
 } //fim do progama
