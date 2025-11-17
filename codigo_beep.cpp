/*
	Name: 
	Author: Fabio.Fonts 
	Date: 17/11/25 08:50
	Description: 
*/
 #include<windows.h>
 #include<stdio.h>
 #include<locale.h>
 #include<conio.h>
 
 main()
 
 {
    setlocale(LC_ALL,"portuguese");
    //sessão de cores
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    WORD cor_original = csbi.wAttributes; 
    	SetConsoleTextAttribute(hConsole, 15);//negrito
    
 	char nome[50];
	char endereco[70];
	char tel[20];
	char idade[2];
	char altura[2];
	char sexo = ' ';
	int i = 0;
 	 for(int i =0; i<5; i++ ){
 	 	gets(nome);
 	 		Beep(200, 300);
 	 	gets(endereco);
 	 		Beep(200, 300);
 	 	gets(tel);
 	 		Beep(200, 300);
 	 	gets(idade);
 	 		Beep(200, 300);
 	 	gets(altura);
 	 		Beep(200, 300);	
 	 	scanf("%c", &sexo);	
 	 		Beep(200, 300);		
 	 	printf("nome: %s\nendereço: %s\ntelefone: %s\nidade: %s\naltura %s\nsexo: %c",nome, endereco, tel, idade, altura, sexo);
	  }
 	
 } //fim do progama
 
