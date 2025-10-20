/*
	Name: recursividade.fatorial
	Author: Fabio.Fonts 
	Date: 20/10/25 08:50
	Description: programa para exibir fatorial de um número por meio de uma função recursiva direta
*/
 #include<windows.h>
 #include<stdio.h>
 #include<locale.h>
 int fatorial(int, int);
 main()
 {
    setlocale(LC_ALL,"portuguese");
    	int num =0;
	 	scanf("%d", &num);
		 int fat = num;   
 		fatorial(num, fat);
 	
 } //fim do progama
 
 int fatorial(int a, int i){
 	int c = a;
	 	if(i<=1){
	 	printf("\nfatorial de %d = %d",c, a);
	 		return a;
	 	}
	
	i--; 		
	printf("%d x %d = %d\n", a, i, a*i);
	a=a*i;
	
	fatorial(a, i);		
 	
 }
