/* Fa�a um programa em C que recebe inteiro e mostra
 os n�meros pares e �mpares (separados, em duas colunas), de 1 at� esse inteiro*/
 #include<stdio.h>
 #include<stdlib.h>
 main()
{
	int num,a=0;
	printf("\n\nDigite o seu numero inteiro: ");
	scanf("%d",&num);
	printf("\n\n");
	for(a=0;a<=num;a++){
		if((a%2)==0){
			printf("\t%d\t",a);
		}
		if((a%2)!=0){
			printf("%d\n",a);
		}

	}
	system("pause");
}
