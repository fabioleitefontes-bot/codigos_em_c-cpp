/*
	Name: texto.3
	Author: Fabio.Fonts 
	Date: 29/09/25 08:50
	Description: palindros
*/
 #include<windows.h>
 #include<stdio.h>
 #include<locale.h>
 //Prototipaççao
 
void imprimirMatriz(int[][3], int);
void trocarZerosUns(int [][3],int);

main(){
	setlocale(LC_ALL,"portuguese");
	int i, j; //indices da matriz
	int mat[3][3];//matriz quadrada de ordem 3
	puts("Digite os 9 elementos da matriz: ");
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			scanf("%d", &mat[i][j]);
	puts("\nMatriz carregada!!!");
	
	puts("conteúdo da matriz");
	imprimirMatriz(mat,3);
	trocarZerosUns(mat, 3);
	puts("matriz com zeros e uns");
	imprimirMatriz(mat,3);
}//fim do programa
 
void imprimirMatriz(int M[][3], int ordem)
{
	int cont = 0;
	for(int i =0; i < ordem; i++)
	{
	
		for(int j =0; j<ordem; j++)
			printf("[%d]\t", M[i][j] ); // \t da um tab na hora do print
	puts("");	
}
}

void trocarZerosUns(int M[][3], int ordem)
{
 	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++)
		{
			if(M[i][j]> 10)
				M[i][j] = 1;
			else 
				M[i][j] = 0;
		}
}

	
}
