#include<stdio.h>
main()
{
	int matriz[2][4],a=0,b=0,cont=0,num=0;
	while(cont<=8){
		printf("\nDigite um numero\n");
		scanf("%d",&num);
		if((num < 0)|| (num>20)){
			printf("\n\nO numero nao pode ser menor que 0 ou maior que 20!\n");
		}
			
		else if (num<11){
			if(b<4){
			matriz[0][b]=num;
			b++;
			cont++;}
					  else if(b>4){
						printf("\nLinha 1 cheia, digite um numero maior que 11 \n");
						 }
					}
					
				
			
		else if(num>11){
			if(a<4){
				matriz[1][a]=num;
				a++;
				cont++;
			}
			if(a>4){
				printf("\nLinha 2 cheia, digite um numero menor que 11!\n");
			}
			
	}
				
		}
		
		
	for(a=0;a<2;a++){
		for(b=0;b<4;b++){
			matriz[a][b] = matriz[a] [b] * 2;
			printf("\nMatriz %d X %d e: %d ",a,b,matriz[a][b]);
			
			
		}
		
	}	
		
	
	
	
	
		
	}
