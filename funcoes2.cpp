/*
	Name: Funcoes2.cpp
	Author: Fabio.FONtes
	Date: 18/08/25 10:10
	Description: progamas para funcoes
*/
#include <stdio.h>
#include<locale.h>
int lerNum();
int somar(int,int);
int multiplicar(int,int);
float dividir(int,int);

main()
{

	 setlocale(LC_ALL,"portuguese");
 	
	//int a, b, result;
	//a = b =  result = 0;
	//a = lerNum();
	//b = lerNum();
	//result = somar(lerNum(), lerNum());
	printf("a soma �: %d", lerNum() + lerNum());
	printf("a multiplica��o � = %d", multiplicar(lerNum(), lerNum()));
	printf("a divis�o �:%.2f", dividir(lerNum(), lerNum()));
	printf("a subtra��o �: %d", lerNum() - lerNum());
	
} //fim do main

int somar(int x, int y)
{
	return x + y;
}
int subtrair(int x, int y)
{
	return x - y;
}
int multiplicar(int xis, int ypslon)
{
	return xis * ypslon;
}
int lerNum()
{
	int num = 0;
	printf("digite um n�mero:\n"); scanf("%d", &num);
	return num;
	
}

float dividir(int d, int c)
{
	return  (float) c / d;
}
