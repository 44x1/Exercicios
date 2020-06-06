#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct dados{
        char nome[100],sexo;
        int idade;
        float mensalidade;
}; struct dados aluno[3];

int main(){
	setlocale (LC_ALL,"portuguese");
	int i,countSexo=0,maior=0;
	char maiorNome;
	float menor=0,media=0,loopinMensalidade=0,tSoma=0;

	printf ("CADASTRO DOS ALUNOS\n\n");
	for (i=0;i<3;i++){
	printf ("Informe o nome do %dº aluno: ",i+1);
	setbuf(stdin,NULL);
	gets(aluno[i].nome);
	printf ("Informe o sexo do %dº aluno M/F? ",i+1);
	scanf ("%c",&aluno[i].sexo);
	setbuf(stdin,NULL);
	if (aluno[i].sexo=='m'||aluno[i].sexo=='M'){
		countSexo++;
	}
	printf ("Informe a idade do %dº aluno: ",i+1);
	scanf ("%d",&aluno[i].idade);
	printf ("Informe a mensalidade do %dº aluno: ",i+1);
	scanf ("%f",&aluno[i].mensalidade);
	loopinMensalidade++;
	tSoma=tSoma+aluno[i].mensalidade;
	printf ("\n");	
}
	media=tSoma/loopinMensalidade;
	menor = aluno[0].mensalidade;
	for (i=1;i<3;i++){
		if(aluno[i].mensalidade<menor){
			menor=aluno[i].mensalidade;
		}
	}
	printf ("\nMenor mensalidade informada R$: %.2f",menor);
	printf ("\nQuantidade total de alunos masculinos: %d",countSexo);
	printf ("\nMédia das mensalidades: %.2f",media);
	maior= aluno[0].idade;
	for (i=1;i<3;i++){
		if(aluno[i].idade>maior){
			maior=aluno[i].idade;
		}
	}
	printf ("\nIdade do aluno mais velho: %d",maior);
}

