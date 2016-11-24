#include<stdio.h>
main()
{
	int matriz[3][3],a=0,b=0;
	printf("\nPreencha sua matriz\n\n");
	while(a<3){
		while((b<3) && (a<3)){
			printf("\ncoluna %d e linha %d = ",a,b);
			scanf("%d",&matriz[a][b]);
			b++;
			
		}b=0;
		a++;
	}
	printf("\n\n\nSua matriz sem diagonal\n\n");
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			if(a!=b){
			printf("\ncoluna %d e linha %d = %d\n",a,b,matriz[a][b]);
			}
		}
	}
	
	
}

