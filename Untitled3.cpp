#include <stdio.h>
main()
{
	int matriz[3][3],a=0,b=0,matrix[3][3];
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
		printf("linha %d X coluna %d = ",a,b);
		scanf("%d", &matriz[a][b]);
		}
	}
	
	//Imprimir matriz vezes 2
	
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			matrix[a][b]=matriz[a][b]*2;
			printf("%d\n",matrix[a][b]);
		}
	}
}
