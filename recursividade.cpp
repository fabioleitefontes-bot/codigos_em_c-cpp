/*
	Name: recursividade
	Author: Fabio.Fonts 
	Date: 20/10/25 08:50
	Description: progama basico usando uma função recursiva direta

*/
 #include<windows.h>
 #include<stdio.h>
 #include<locale.h>
  void Fx(int);
  void Fy(char);
 main()
 
 {
    setlocale(LC_ALL,"portuguese");
    
    puts("início das chamadas recursivas");
    
 	Fx(5);
 	puts("fim da (Fx):");
 	
 	Fy('a');
 	puts("fim da (fy)");
 } //fim do progama
 
 void Fx(int a){
 	a = a +1;
 	printf("a: [%d]\n", a);
 	if(a>=30)
 		return;
 	Fx(a);
 }
 
 void Fy(char c){
 		if(c == 'z'){
 		printf("[%c]\n", c);
 		return;
	 }
 	printf("[%c]\n", c);
 	c++;
 
 	Fy(c);

 	
 }
