/*5) Fa�a um programa que pergunta um n�mero ao usu�rio, e mostra sua tabuada completa (de 1 at� 10). #*/
#include<stdio.h>
#include<stdlib.h>
main()
{
	int a=1,num,result;
	printf("Escolha seu numero ");
	scanf("%d",&num);
	for(a=1;a<=10;a++){
		result=a*num;
		printf("\n\t%d	X	%d  =  %d\n",num,a,result);
		
	}
	system("pause");
}
