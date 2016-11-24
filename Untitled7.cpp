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
	for(b=0;b<4;b++){
	if(d<=11){
		matriz[0][b] = d;
	}
	else if((d>11) || (d<=20)){
	matriz[1][b]=d;
	}
	}
	for(a=0;a<2;a++){
		for(b=0;b<4;b++){
			printf("%d",matriz[a][b]);
		}
	}
}
