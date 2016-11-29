#include<stdio.h>
main()
{
	int matriz[2][2],a=0,b=0,num,soma=0;
	while(a<2){
		while(b<2){
			printf("\nDigite o elemento ");
			scanf("%d",&num);
			if((num%2)!=0)
				printf("\nO numero deve ser par");
			else if((num%2)==0){
				matriz[a][b]=num;
				b++;
			}
		}
		b=0;
		a++;
	}
	
	while(a<2){
		while(b<2){
			soma = soma + matriz[a][b];
			b++;
		}
		a++;
		b=0;
	}
	printf("\n\nA soma dos elementos e %d\n",soma);
}
