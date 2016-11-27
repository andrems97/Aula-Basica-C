/*5) Faça um programa que pergunta um número ao usuário, e mostra sua tabuada completa (de 1 até 10). #*/
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
