/*
	Name: Recursividade_fib
	Author: Fabio.Fonts 
	Date: 01/09/25 08:50
	Description: fibonaci com recursividade
*/
 #include<windows.h>
 #include<stdio.h>
 #include<locale.h>
void Fibonacci(long long[], int, int);
 main()
 
 {
    setlocale(LC_ALL,"portuguese");
    int i;
    int fib = 0;
 	scanf("%d", &fib);
 	  long long soma[fib] = {0};
 	  	 soma[0] = 1;
		 soma[1] = 1;
 	Fibonacci(soma, fib, 2);
 } //fim do progama
 void Fibonacci(long long soma[], int fib, int i ){
 
	soma[i] = soma[i-2] + soma[i-1];
	i++;
	 
	 if(fib<=2){
		 printf("Fib[%d] = %lld", fib,soma[fib]);
		 return;
	}
	 if(fib==i){
	 	printf("Fib[%d] = %lld", fib,soma[i-1]);
	 	return;
 }
 		 Fibonacci(soma, fib, i);
 	
 }
