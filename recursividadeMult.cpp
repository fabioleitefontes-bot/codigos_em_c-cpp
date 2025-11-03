/*
	Name: recursividadeMult.cppp
	Author: Fabio.Fonts 
	Date: 01/09/25 08:50
	Description: exibir tabuada usando recursividade
*/
	int i=1;
  
 #include<windows.h>
 #include<stdio.h>
 #include<locale.h>
 
 void exibirTabuada(int);
 main()
 
 {
    setlocale(LC_ALL,"portuguese");
    int mult =0;
	printf("digite o numero para realizar a tabuada: "); scanf("%d", &mult);
	puts("------Tabuada------");
	
 	exibirTabuada(mult);
 } //fim do progama
 
 void exibirTabuada(int mult){
 	if(i<=10){	
 		printf("%d x %d = [%d]\n", mult,i, mult*i);
	 	i++;
	 	exibirTabuada(mult);}
 	else
 	return;
 }
 	
