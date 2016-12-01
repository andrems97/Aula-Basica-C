#include<stdio.h>
main()
{
	int a=0,b=0,matriz[2][2],matrix[2][2],c=2,d=2;
	for(a=0;a<2;a++){
		for(b=0;b<2;b++){
			printf("Digite o elemento: ");
			scanf("%d",&matriz[a][b]);
		}
	}
	
	
	for(a=0;a<2;a++){
		for(b=0;b<2;b++){
			printf("%d\n",matriz[a][b]);
		}
	}
	
	for(a=1;b>=0;a--){
		for(b=1;b>=0;b--){
			printf("%d\n",matriz[a][b]);
		}
	}
}
