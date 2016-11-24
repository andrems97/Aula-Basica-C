// EXERCICIO 3 DO DIA 24/11
#include<stdio.h>
main()
{
	int matriz[2][4],a=0,b=0,c,d;
	inicio:
	for(c=1;c<9;c++){
		printf("\nDigite um numero: ");
		scanf("%d",&d);
		if((d<0) || (d>20)){
			printf("Numero invalido\n");
			goto inicio;
		}
	}
}
