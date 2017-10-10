#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <locale.h>

void menu();
void admin();
void casos();

void main()
{
	setlocale(LC_ALL, "Portuguese");

	menu();





	system("pause");
}

void menu()
{
	int opcao = 1, flag = 0;

	do {

		system("cls");

		if (opcao < 1 || opcao > 3)
			printf("\tOpcao invalida! Por favor digite de novo\n\n");

		printf("Bem vindo ao “Onde no mundo esta Marcos Sandiego”\n\n");
		printf(" Digite a opcao do menu que deseja acessar:\n");
		printf("\n  1 - Login / Editar cadastro (Adm)");
		printf("\n  2 - Cadastrar / Editar casos");
		printf("\n  3 - Jogar");
		printf("\n\n Digite a opção desejada: ");
		scanf("%i", &opcao);

	} while (opcao < 1 || opcao > 3);

	switch (opcao)
	{
	case 1:
		admin();
	break;
	case 2:
		casos();
	break;

	default:
		break;
	}

}

void admin()
{
	FILE * fd = fopen("Administrador.txt", "w");

	printf(" Selecione a opcao do menu desejada: \n\n");
	printf(" 1 - Login\n");
	printf(" 2 - Editar cadastro\n");
}