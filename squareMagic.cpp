/*
	Name: magicSquare
	Author: Fabio.Fonts 
	Date: 01/09/25 08:50
	Description: progama que carregue uma matriz e retorna se a matriz é mágica ou n
*/
 #include<windows.h>
 #include<stdio.h>
 #include<locale.h>
 void imprimirMatriz(int[][3], int);
 void squareMagic(int[][3], int, int);

 main()
 {
    setlocale(LC_ALL,"portuguese");
    
    //sessão para o objeto das cores
   	 HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    WORD cor_original = csbi.wAttributes; 
    
    int ordem = 3;
 	int i, j, par; //indices da matriz
	int mat[3][3];//matriz quadrada de ordem 3
		SetConsoleTextAttribute(hConsole, 15);
	puts("Digite os 9 elementos da matriz: ");
	   SetConsoleTextAttribute(hConsole, 7);
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++){
		scanf("%d", &mat[i][j]);
		}
		SetConsoleTextAttribute(hConsole, 15);
	puts("Matriz carregada!!!");
	
		SetConsoleTextAttribute(hConsole, 9);
	printf("digite o valor esperado da soma: "); 
		SetConsoleTextAttribute(hConsole, 7);
	scanf("%d", &par);
		SetConsoleTextAttribute(hConsole, 15);
	puts("matriz original\n");
 	imprimirMatriz(mat,3);
 		SetConsoleTextAttribute(hConsole, 7);
 	squareMagic(mat, 3, par);
 	
 	
 } //fim do progama
 void imprimirMatriz(int M[][3], int ordem)
{
	ordem = 3;
	int cont = 0;
	for(int i =0; i < ordem; i++)
	{
	
		for(int j =0; j<ordem; j++)
			printf("[%d]\t", M[i][j] ); // \t da um tab na hora do print
	puts("");	

}
}
void squareMagic(int M[][3], int ordem, int par)
{
		 HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    WORD cor_original = csbi.wAttributes; 
    
    int soma = 0;
    
    for(int i = 0; i < ordem; i++){
        soma = 0;
        for(int j = 0; j < ordem; j++){
            soma = M[i][j] + soma; 
        }
        if(soma != par){
        	SetConsoleTextAttribute(hConsole, 12);
            printf("\nERRO: A soma da LINHA %d (%d) é diferente do valor esperado (%d).", i + 1, soma, par);
            SetConsoleTextAttribute(hConsole, 7);
            return; 
        }
    }
    
    for(int j = 0; j < ordem; j++){
        soma = 0;
        for(int i = 0; i < ordem; i++){
            soma += M[i][j]; // Soma a COLUNA 'j'
        }
        if(soma != par){
        	SetConsoleTextAttribute(hConsole, 12);
            printf("\nERRO: A soma da COLUNA %d (%d) é diferente do valor esperado (%d).", j + 1, soma, par);
            SetConsoleTextAttribute(hConsole, 7);
            return; 
        }
    }
    
    soma = 0;
    for(int i = 0; i < ordem; i++){
        soma += M[i][i];
    }
    if(soma != par){
    	SetConsoleTextAttribute(hConsole, 12);
        printf("\nERRO: A soma da DIAGONAL PRINCIPAL (%d) é diferente do valor esperado (%d).", soma, par);
        SetConsoleTextAttribute(hConsole, 7);
        return;
    }

    soma = 0;
    for(int i = 0; i < ordem; i++){
        soma += M[i][ordem - 1 - i];
    }
    if(soma != par){
    	SetConsoleTextAttribute(hConsole, 12);
        printf("\nERRO: A soma da DIAGONAL SECUNDÁRIA (%d) é diferente do valor esperado (%d).", soma, par);
        SetConsoleTextAttribute(hConsole, 7);
        return;
    }
    	SetConsoleTextAttribute(hConsole, 10);
    printf("\nA matriz É UM QUADRADO MÁGICO com soma esperada de %d.\n", par);
    SetConsoleTextAttribute(hConsole, 7);
}
 

