/* Fa�a um programa que pergunte ao usu�rio quantos alunos tem na sala dele.
 Em seguida, atrav�s de um la�o while, pede ao usu�rio para que entre com as notas de todos os alunos da sala, um por vez.
 Por fim, o programa deve mostrar a m�dia, aritm�tica, da turma. */
 #include<stdio.h>
 #include<stdlib.h>
 main()
{
	int a=1,al;
	float total=0,media=0,nota;
	printf("Quantos alunos tem na sua sala?");
	scanf("%d",&al);
	while(a<=al){
		printf("\n\nEntre a media do aluno numero %d: ",a);
		scanf("%f",&nota);
		a++;
		total=total+nota;

	}
	
	media=total/al;
	printf("\n\nA nota media da sua sala e %f \n",media);
	system("pause");
}
