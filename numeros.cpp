/*
	Name: numeros
	Author: Fabio.Fontes 
	Date: 08/04/25 11:21
	Description: arquivo que pegue 3 numeros e fale qual o maior, menor, e a m�dia entre eles
*/

 #include<stdio.h>
 #include<locale.h>
 
 main()
  
 {
    setlocale(LC_ALL,"portuguese");
 	
 int i =0;
 int num = 0;
 float media = 0.0 ;
 int maio = 0;
 int menor = 0;
 
 printf("digite um n�mero"); scanf("%d", num);
        maio = num;
        menor = num;
        media = num + media
    while(i<2)
    {
      printf("digite um n�mero"); scanf("%d", num);
         if(num < maio)
         { maio = num; 
         }
                 else if (num > menor)
                 {menor = num;
                 }     
         media = num + media / 3;
        i++:     
    }            
 			
 printf("o maior numero lido �: %d", maior);
 printf("a m�dia dos n�meros lidos �:%F", media);			 
 	
 } //fim do progama
