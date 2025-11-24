/*
	Name: potencia.cpp
	Author: Fabio.Fonts 
	Date: 24/11/25 08:50
	Description: programa que leia base e expoentee devolve a potenciação
*/
 #include<windows.h>
 #include<stdio.h>
 #include<locale.h>
 
 //sessão de prototitapaçao
 void potenciar(int, int, int);
 main()
 {
    setlocale(LC_ALL,"portuguese");
    //sessão de cores
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    WORD cor_original = csbi.wAttributes; 
    	
    	
    int base =0;
	int exp=0;
   	int potencia =1;
    	
    	SetConsoleTextAttribute(hConsole, 11);//negrito
    	printf("digite a base e expoente:"); 
		SetConsoleTextAttribute(hConsole, 7);
		scanf("%d %d", &base, &exp);
    	potenciar(base, exp, potencia);
 	
 } //fim do progama
 
 void potenciar(int b, int e, int p){
 	
 	 HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    WORD cor_original = csbi.wAttributes; 
 	
 	for(int i=0; i <e; i++){
 		p = b * p;
 		printf("%d x %d = %d\n", b, i+ 1, p);
 }
 	SetConsoleTextAttribute(hConsole, 15);
 	SetConsoleTextAttribute(hConsole, 10);
 printf("%d^%d = %d", b,e,p);
 	SetConsoleTextAttribute(hConsole, 7);
 }
