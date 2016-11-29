#include<stdio.h>
#include<stdlib.h>
main()
{
	int a,b;
	int num,matriz[3][3];
	float media,total;
	printf("\nPreencha a matriz com 9 elementos\nsomente comnumeros multiplos de 3!\n");
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			inicio:
			printf("\nDigite o elemento: ");
			scanf("%d",&num);
			if((num%3)==0){
				matriz[a][b] = num;
				
			}
			else{
				printf("\nO numero deve ser multiplo de 3");
				goto inicio;
			}
			
		}
		
	}
	
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			total=total + matriz[a][b];
			
		}
		
	}
	media= total / 9;
	printf("\nA media dos elementos da matriz e:  %f\n\n",media);
}
