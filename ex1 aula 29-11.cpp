#include <stdio.h>
main()
{
		int a=0,matriz[3][3],b=0,c=1,num;
		float media,total;
		for(a=0;a<3;a++){
				for(b=0;b<3;b++){
				
						inicio:
						printf("%d Digite um numero multiplo de 3\n",c);
						scanf("%d",&num);
						if((num%3)!=0){
								printf("Digite novamente\n");
									goto inicio;
						}
						else{
								matriz[a][b]=num;
							}
									
						}
				
		}
		for(a=0;a<3;a++){
				for(b=0;b<3;b++){
					total=matriz[a][b]+total;
				}
		}		
		media=total/9;
		printf("A media e\t %f\n",media);
}

