#include<stdio.h>
main()
{
	int matriz[4][4],a=0,b=0;
	printf("\nPreencha sua matriz\n\n");
	for(a=0;a<4;a++){
		for(b=0;b<4;b++){
			printf("\nEscolha o valor ");
			scanf("%d", &matriz[a][b]);
		}
	}
	
	for(a=0;a<4;a++){
		for(b=0;b<4;b++){
			printf("%d\n",matriz[a][b]);
		}
	}
	
	
}


