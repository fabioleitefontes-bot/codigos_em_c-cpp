/*
	Name: VetorMatriz
	Author: Fabio.Fonts 
	Date: 17/11/25 08:50
	Description: 
*/
 #include<windows.h>
 #include<stdio.h>
 #include<locale.h>
 void matriz(int [9], int [][3]);
 main()
 
 {
    setlocale(LC_ALL,"portuguese");
    //sessão de cores
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    WORD cor_original = csbi.wAttributes; 
    
    	SetConsoleTextAttribute(hConsole, 15);
    
  	int	vet[9] = {0};
  	for(int i =0; i< 9; i++)
		vet[i] = i; 	
	puts("vetor:");
	
	for(int i =0; i< 9; i++)
		printf("[%d]", vet[i]); 	
	printf("\nvetor para matriz:");	
		SetConsoleTextAttribute(hConsole, 7);
		
	int mat[3][3];
	matriz(vet, mat);
	for(int i =0; i<3; i++){
		puts(" ");
 		for(int j =0; j<3; j++){
 			SetConsoleTextAttribute(hConsole, 11);
 			printf("[%d] ",mat[i][j]);
		 }
		SetConsoleTextAttribute(hConsole, 7);
	
 }} //fim do progama 
 void matriz(int vet[9], int mat[][3]){
 	int k = 0;
 	for(int i =0; i<3; i++){
 		for(int j =0; j<3; j++){
 			mat[i][j] = vet[k];
 			k++;
		 }
	 }
 }
 
