/*
	Name: ehPar.cpp
	Author: Fabio.Fonts 
	Date: 03/11/25 08:50
	Description: Escrever um código em C que leia um número, passe para uma função e  teste se ele é par. Sendo PAR envia para uma função e teste se ele é par. 
	Sendo PAR envia para uma função recursiva chamada "ehPar" e mostra até chegar em 100, aumentando de 2 em 2. Caso seja IMPAR, impreme o cubo do número e volta
	a solicitar um numero PAR e envia para a função "ehPar"
*/
 #include<windows.h>
 #include<stdio.h>
 #include<locale.h>
 void ehPar(int);
 void paridade(int);
 main()
 
 {
    setlocale(LC_ALL,"portuguese");
    int num;
	scanf("%d", &num);
		if(num%2==1)
		printf("é impar e o número ao cubo é :[%d]", num*num*num);	
 	else
 		printf("o número é par\n------------\n");
	paridade(num);

 } //fim do progama
void ehPar(int num){

	if(num>=100)
		return;
	else
		num= num + 2;
		printf("[%d]\n", num);
		ehPar(num);
}
void paridade(int num){
	if(num%2==0)
		ehPar(num);

}
