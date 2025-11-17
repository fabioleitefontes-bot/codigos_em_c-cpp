/*
	Name: 
	Author: Fabio.Fonts 
	Date: 17/11/25 08:50
	Description: 
*/
 #include<windows.h>
 #include<stdio.h>
 #include<locale.h>
 
 main()
 
 {
    setlocale(LC_ALL,"portuguese");
    //sessão de cores
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    WORD cor_original = csbi.wAttributes; 
    	SetConsoleTextAttribute(hConsole, 15);//negrito
    	SetConsoleTextAttribute(hConsole, 7);
 
 	
 } //fim do progama
