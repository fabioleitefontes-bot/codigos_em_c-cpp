/*
	Name: LOginSenha.cpp
	Author: Fabio.Fonts 
	Date: 03/11/25 08:51
	Description: Programa com uso de recursividade para Login e Senha
*/
 #include<windows.h>
 #include<stdio.h>
 #include<locale.h>
 #include<string.h>
 
 //Sessão de protopição
 
 void verLogin();
 void verSenha();
 
 //variáveis globais
 char login[] = "Fabio.Fontes";
 int pwd = 123;
 int cont=1;
 int i =1;
 main()
 {
    setlocale(LC_ALL,"portuguese");
 
 	verLogin();
 } //fim do progama
 
 //função para verificar se o login ta correta
 void verLogin(){
 	
 	char usuario[15];
 	printf("usuário:"); 	scanf("%s", &usuario);
 	
 	if(strcmp(usuario, login)==0)
 		verSenha();
 	else if(i<5){
 		i++;
 		verLogin();}
 	else{
	 	printf("acesso negado tente novamente mais tarde");
	 	return;	
	 }
 }
 
 void verSenha(){
 	
 	int senha = 0;
 	printf("senha:");		scanf("%d", &senha);
 	
 	if(senha == pwd){
 		printf("senha correta, acesso liberado");
 		return;

	 }
 	else if(cont<3){
 		cont++;
 		
		verSenha();	
		 }	
	else{
		 printf("acesso negado verifique seu usuário");
		verLogin(); 
				
 
 }
}
