/*4) Fazer um programa em C que solicita 10 números ao usuário e
 através de um laço while, e ao final mostre qual destes números é o maior. */
 #include<stdio.h>
 #include<stdlib.h>
main()
{
	int a=1,maior=0,num;
	while(a<=10){
		printf("Digite o %do numero ",a);
		scanf("%d",&num);
		if(num>maior){
			maior=num;
		}
		a++;
		
	}
	printf("\n\nO maior numero e %d\n",maior);
	system("pause");
}
