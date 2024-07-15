#include <stdio.h> //Comunica��o com o usuario
#include <stdlib.h> //Aloca��o de memoria
#include <locale.h> //Aloca��o de texto
#include <string.h> //Strings

int rnomes()//registro de nomes
	{
		char cpf[40];//Strings
		char nome[40];
		char sobrenome[40];
		char cargo[40];
		char arquivo [40];
		
		setlocale(LC_ALL, "Portuguese");//Defini��o de linguagem para portugu�s
		
		printf("Qual � o CPF:");//texto
		scanf("%s", cpf);//inser��o de dados cpf na string
		
		
		
		strcpy(arquivo, cpf);//responsavel por copiar os valores da string
		
		FILE *file;//cria��o do arquivo
		file = fopen(arquivo, "w");//cria��o do arquivo
		fprintf(file,cpf);//cpf registrado no arquivo
		fclose(file);//fechamento do arquivo
		
	
		
		file = fopen(arquivo, "a");//atualiza��o dos arquivo
		fprintf(file, ",");//inser��o de dados
		fclose(file);//fechamento do arquivo
		
		printf("\nQual � o nome:");//texto
		scanf("%s", nome);////inser��o de dados nome na string
		
		
		file = fopen(arquivo, "a");//atualiza��o dos arquivo
		fprintf(file,nome);//nome registrado no arquivo
		
		fclose(file);//fechamento do arquivo
		
		file = fopen(arquivo, "a");//atualiza��o dos arquivo
		fprintf(file, ",");//inser��o de dados
		fclose(file);//fechamento do arquivo
		
		printf("\nQual � o sobrenome?");//texto
		scanf("%s", sobrenome);//inser��o de dados sobrenome na string
		
			
		file = fopen(arquivo, "a");//atualiza��o do arquivo
		fprintf(file,sobrenome);//sobrenome registrado no arquivo
		fclose(file);//fechamento do arquivo
		
		file = fopen(arquivo, "a");//atualiza��o do arquivo
		fprintf(file, ",");//inser��o de dados
		fclose(file);//fechamento do arquivo
		
		printf("\nQual � o cargo:");//texto
		scanf("%s", cargo);//inser��o de dados cargo na string
		
			
		file = fopen(arquivo, "a");//atualiza��o do arquivo
		fprintf(file,cargo);//cargo registrado no arquivo
		fclose(file);//fechamento do arquivo
		
		file = fopen(arquivo, "a");//atualiza��o do arquivo
		fprintf(file, ",");//inser��o de dados
		fclose(file);//fechamento do arquivo
	}	
	
int cnomes()//conferir nomes cadastrados
	{
		char cpf[40];//strings
		char arquivo[160];
		
		setlocale(LC_ALL, "Portuguese");//Defini��o de linguagem para portugu�s
		
		printf("Qual � o CPF do indiv�duo: ");//texto
		scanf("%s", cpf);//inser��o de dados cpf na string
		
		FILE *file;
		file = fopen(cpf,"r");//leitura de arquivo
		
		if(file == NULL)//caso o arquivo n�o exista
			{
				printf("Esse arquivo n�o existe\n");//texto			
			}	
			
		while(fgets(arquivo, 160, file) != NULL)//caso o arquivo extista
			{
				printf("\nEssas s�o as informa��es do usuario: ");//texto
				printf("%s", arquivo);//informa��es do usuario requisitado
				printf("\n\n");
			}	
			
		
		system("pause");//pausa a execu��o do aplicativo at� que uma tecla seja pressionada
	}	

int dnomes()//deletar nomes cadastrados
	{
		char cpf[40];//strings
		
		printf("Qual o cpf do usuario a ser deletado: ");//texto
		scanf("%s",cpf);//inser��o de informa��o
		
		remove(cpf);//remo��o do arquivo
		
		FILE *file; //abrir arquivo
		file = fopen(cpf,"r");
		
		if(cpf == NULL);//caso o arquivo n�o exista
			{
				printf("O usuario n�o se encontra no sistema!\n");//texto
			}
		
		system("pause");//pausa at� que uma tecla seja pressionada
	}	









int main()//programa principal
		{
			int opcao=0;//definindo vari�eis
			int laco=1;
			
			for(laco=1;laco=1;)
				{
		
					setlocale(LC_ALL, "Portuguese");//definir a linguagem para portugu�s
					system("cls");//limpar a tela
					printf("#@ Cart�rio da EBAC @#\n\n");//inicio menu
					printf("Escolha a op��o desejada\n\n");
					printf("\t1 - Registrar nomes\n");
					printf("\t2 - Consultar nomes\n");
					printf("\t3 - Deletar nomes\n\n");//fim menu
					printf("Op��o:");//texto
					scanf("%d", &opcao);//sele��o do menu
					
					system("cls");//limpar tela
					
					switch(opcao)//op��es do menu
						{
							case 1://registrar nome
								rnomes();//fun��o rnomes
							break;
							
							case 2://consultar nomes
								cnomes();//fun��o cnomes
							break;
							
							case 3://deletar nome
								dnomes();//fun��o dnomes
							break;
							
							default://caso o usuario insira uma op��o invalida
								printf("\tEssa op��o n�o existe\n");
								system("pause");
							break;
						}
						
				
				}
			}
