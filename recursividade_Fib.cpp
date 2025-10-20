/*
	Name: texto.3
	Author: Fabio.Fonts 
	Date: 01/09/25 08:50
	Description: fibonaci com recursividade
*/
 #include<windows.h>
 #include<stdio.h>
 #include<locale.h>
void Fibonacci(long int[], int, int);
 main()
 
 {
    setlocale(LC_ALL,"portuguese");
    int i =2;
    int fib = 0;
 	scanf("%d", &fib);
 	  long int soma[fib];
 	Fibonacci(soma, fib, i);
 } //fim do progama
 void Fibonacci(long int soma[], int fib, int i ){
 	if(fib<2){
	 
	 soma[0] = 1;
	 soma[1] = 1;
	 printf("Fib[%d] = %lld", fib,soma[fib]);
	 return;
}
	 else
	 	soma[i] = soma[i-2] + soma[i-1];
	 	
	 i++;
	 Fibonacci(soma, fib, i);
	 
	 if(fib==i+1){
	 	printf("Fib[%d] = %lld", fib,soma[i]);
	 	return;
 }
 	
 	
 }
