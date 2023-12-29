#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int menu,cpflen;
	int max,check,i=0;
	struct ficha{
		char nome[40];
		char cpf[12];
		int tipo;
	};
	
	struct ficha f[20];
	
	do{//Menu principal
		printf("Bem vindo ao sistema de atendimento\n");
		printf("1 - Solicitar Atendimento\n");
		printf("2 - Listar Atendimentos Registrados\n");
		printf("3 - Listar Atendimentos por Setor\n");
		printf("4 - Sair\n\n");
		scanf("%d", &menu);
		fflush(stdin);
		
		switch(menu){
			case 1:{//Solicitar Atendimento
				system("cls");
				printf("Digite seu nome\n");
				scanf("%s", f[i].nome);
				fflush(stdin);
				do{
					printf("Digite seu cpf\n");
					scanf("%s", f[i].cpf);
					fflush(stdin);
					cpflen = strlen(f[i].cpf);
				}
				while(cpflen != 11);
				do{
					check = 0;
					printf("Qual setor deseja ser atendido:\n1 - Abertura de conta\n2 - Caixa\n3 - Gerente Pessoa Física\n4 - Gerente Pessoa Jurídica\n\n");
					scanf("%d", &f[i].tipo);
					fflush(stdin);
					if(f[i].tipo<1||f[i].tipo>4){
						printf("Setor Inexistente\n");
						system("pause");
						system("cls");
					}
					else{
						check = 1;
					}
				}
				while(check !=1);
				system("cls");
				printf("Sua solicitação foi salva no sistema\n");
				system("pause");
				system("cls");
				i = (i + 1);
				max = i;
				break;
			}
			case 2:{//Listar Atendimentos Registrados
				system("cls");
				printf("Atendimentos Registrados\n=====================================\n");
				for (i=0;i<max;i++){
					printf("Nome: %s\nCPF: %s\n", f[i].nome,f[i].cpf);
					switch(f[i].tipo){
						case 1:{
							printf("Tipo de Atendimento - 1 - Abertura de Conta\n");
							break;
						}
						case 2:{
							printf("Tipo de Atendimento - 2 - Caixa\n");
							break;
						}
						case 3:{
							printf("Tipo de Atendimento - 3 - Gerente Pessoa Física\n");
							break;
						}
						case 4:{
							printf("Tipo de Atendimento - 4 - Gerente Pessoa Jurídica\n");
							break;
						}
					};
					printf("=====================================\n");
				}
				system("pause");
				system("cls");
				break;
				}
			case 3:{//Listar por Setor
				system("cls");
				for(i=0;i<max;i++){
					if(f[i].tipo == 1){
						printf("Nome: %s\nCPF: %s\n", f[i].nome,f[i].cpf);
						printf("Setor 1 - Abertura de conta\n=====================================\n");
					}
				}
				for(i=0;i<max;i++){
					if(f[i].tipo == 2){
						printf("Nome: %s\nCPF: %s\n", f[i].nome,f[i].cpf);
						printf("Setor 2 - Caixa\n=====================================\n");
					}
				}
				for(i=0;i<max;i++){
					if(f[i].tipo ==3){
						printf("Nome: %s\nCPF: %s\n", f[i].nome,f[i].cpf);
						printf("Setor 3 - Gerente Pessoa Física\n=====================================\n");
					}
				}
				for(i=0;i<max;i++){
					if(f[i].tipo == 4){
						printf("Nome: %s\nCPF: %s\n", f[i].nome,f[i].cpf);
						printf("Setor 4 - Gerente Pessoa Jurídica\n=====================================\n");
					}
				}
				system("pause");
				system("cls");
				break;
			}
			case 4:{//Sair do Sistema
				system("cls");
				printf("Tenha um Bom Dia");
				break;
			}
		}
	}
	while(menu != 4);
}
