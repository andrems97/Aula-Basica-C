#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int calc(int somax,int contx){
	int media;
	media=somax/contx;
	printf("\n\nA media da matriz e %d",media);
}

main()
{
	int a=0,b=0,cont=0,matriz[2][4],num=0,soma;
	
	printf("Digite uma sequencia numerica de 8 numeros,comešando por 0 e terminando com 7   \n\n");
	while(cont<8){
		printf("\nDigite o o valor: ");
		scanf("%d",&num);
		if(num != cont){
			printf("\nA sequencia deve seguir como a instrucao manda!");
		}
		else if((num%2)==0) {
			matriz[0][a]=num;
			
			cont++;
			a++;
		}
		else if ((num%2)!=0){
			matriz[1][b]=num;
			
			cont++;
			b++;
		}
		
	}
	
	for(a=0;a<2;a++){
		for(b=0;b<4;b++){
			
			soma = matriz[a][b] + soma;
		}
	}
	calc(soma,cont);
}
