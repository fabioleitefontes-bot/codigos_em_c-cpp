/*
	Name: texto.3
	Author: Fabio.Fonts 
	Date: 01/09/25 08:50
	Description: palindros
*/
 #include<windows.h>
 #include<stdio.h>
 #include<locale.h>
 void calcularFibonacci(long int, long int[]);
  void imprimirFibonacci(long int, long int[]);
 void numeroMagic(long int, long int[]);
 main()
 
 {
 	
    setlocale(LC_ALL,"portuguese");
    long int teste = 0;
    printf("digite o tamanho da sequencia: ");
 	scanf("%lld", &teste);
 	long int fib[teste+1];
 	calcularFibonacci(teste, fib);
 	imprimirFibonacci(teste, fib);
 
 } //fim do progama
 
 void calcularFibonacci(long int teste, long int fib[])
 {

    fib[0] = 0;
    fib [1] = 1;

		for( long int cont = 2; cont < teste + 1 ; cont++)
				fib[cont] = fib[cont - 1] + fib[cont- 2];

		}
	void imprimirFibonacci(long int, int long[])
	{
		for(int i = 0; i< teste; i++)
			printf("FIB(%d) = %lld" i, fib[i];)
		
		
		
		
		
		}	
 
 
