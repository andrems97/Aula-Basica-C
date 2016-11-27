/*FAZER UM PROGRAMA PARA MOSTRAR TODOS OS NUMEROS IMPARES DE 1 A 100*/
#include<stdio.h>
#include<stdlib.h>
main()
{
	int a=1;
	for(a=1;a<=100;a++){
		if((a%2)!=0){
		printf("\t%d\n",a);
		}
	}
	system("pause");
}
