/*
	Name: multiplaescolha.cpp
	Author: Fabio.fontes
	Date: 10/06/25 11:38
	Description: progama que apresenta uma estrutura de "mutipla esc0lha para o usu�rio".
*/


 #include<stdio.h>
 #include<windows.h>
 #include<locale.h>
 
 main()
 
 {
    setlocale(LC_ALL,"portuguese");
 	int opc = 0;
 	char sim;
 	
 	while(1) //loop em quanto for vdd
 	{
	 	 opc = 0;
	 	 printf("\n--------\n");
	 	 printf("menu de op��o:");
	 	 printf("\n--------\n");
	 	 printf("|Digitou 1 | mostrar�: um � o n�mero que escolheram.|\n|Digitou 2 | mostrar�: o n�mero � dois.|\n|Digitou 3 | mostrar�: s� o n�mero 3.|\n|Digitou 4 | mostrar�: olha s� o n�mero 4 |\n");
       	 printf("\n--------\n");
	  	 printf("digite uma op��o:"); scanf("%d", &opc);
         printf("\n--------\n");
         system("cls");
		
		//estrutura de m�ltiplas escolha
		
		//switch case
		switch(opc)
		{
			case 1: puts("um � o n�mero que voc� escolheu");
				break;	
			case 2: puts(" o n�mero � dois");
				break;
			case 3: puts("s� o n�mero tr�s");
				break;
			case 4: puts("olha s� o numeros 4");
				break;
			default: puts("digitou errado panguar�.\n progama finalizado...");
				exit(0);
	     }//fim do switch
	 
	} // fim do switch
			  
	system("pause");
 	
 } //fim do progama
	
	
	
	
	
	
	
	
	
