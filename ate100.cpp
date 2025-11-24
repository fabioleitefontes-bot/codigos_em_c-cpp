/*
	Name: ate100
	Author: Fabio.Fonts 
	Date: 17/11/25 08:50
	Description: 
*/
 #include<windows.h>
 #include<stdio.h>
 #include<locale.h>
 int somatorio(int, int, int);
 main()
 {
    setlocale(LC_ALL,"portuguese");
    //sessão de cores
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    WORD cor_original = csbi.wAttributes; 
    
    	SetConsoleTextAttribute(hConsole, 11);//negrito
     int num = 0;
	 int i = 0;
	
	 printf("digite um número: ");
		SetConsoleTextAttribute(hConsole, 7);
	 scanf("%d", &num);
	 int aux= num;
     somatorio(num, i, aux);
 	
 } //fim do progama
int somatorio(int num, int i, int aux){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    WORD cor_original = csbi.wAttributes; 
    
	if(num + aux > 100 ){
	
		SetConsoleTextAttribute(hConsole, 15);
		printf("chegou proximo de 100 no: ");
			SetConsoleTextAttribute(hConsole, 10);
		printf("%d\n", i);
			SetConsoleTextAttribute(hConsole, 7);
		return num;}
	else{
		num= num + aux;
		i++;
			SetConsoleTextAttribute(hConsole, 15);
		printf("%d", num);
			SetConsoleTextAttribute(hConsole, 10);
		printf(" %d\n", i);
			SetConsoleTextAttribute(hConsole, 7);
		somatorio(num, i, aux);
	}

}
