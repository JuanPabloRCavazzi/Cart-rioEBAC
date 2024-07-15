#include <stdio.h> //Comunicação com o usuario
#include <stdlib.h> //Alocação de memoria
#include <locale.h> //Alocação de texto
#include <string.h> //Strings

int rnomes()//registro de nomes
	{
		char cpf[40];//Strings
		char nome[40];
		char sobrenome[40];
		char cargo[40];
		char arquivo [40];
		
		setlocale(LC_ALL, "Portuguese");//Definição de linguagem para português
		
		printf("Qual é o CPF:");//texto
		scanf("%s", cpf);//inserção de dados cpf na string
		
		
		
		strcpy(arquivo, cpf);//responsavel por copiar os valores da string
		
		FILE *file;//criação do arquivo
		file = fopen(arquivo, "w");//criação do arquivo
		fprintf(file,cpf);//cpf registrado no arquivo
		fclose(file);//fechamento do arquivo
		
	
		
		file = fopen(arquivo, "a");//atualização dos arquivo
		fprintf(file, ",");//inserção de dados
		fclose(file);//fechamento do arquivo
		
		printf("\nQual é o nome:");//texto
		scanf("%s", nome);////inserção de dados nome na string
		
		
		file = fopen(arquivo, "a");//atualização dos arquivo
		fprintf(file,nome);//nome registrado no arquivo
		
		fclose(file);//fechamento do arquivo
		
		file = fopen(arquivo, "a");//atualização dos arquivo
		fprintf(file, ",");//inserção de dados
		fclose(file);//fechamento do arquivo
		
		printf("\nQual é o sobrenome?");//texto
		scanf("%s", sobrenome);//inserção de dados sobrenome na string
		
			
		file = fopen(arquivo, "a");//atualização do arquivo
		fprintf(file,sobrenome);//sobrenome registrado no arquivo
		fclose(file);//fechamento do arquivo
		
		file = fopen(arquivo, "a");//atualização do arquivo
		fprintf(file, ",");//inserção de dados
		fclose(file);//fechamento do arquivo
		
		printf("\nQual é o cargo:");//texto
		scanf("%s", cargo);//inserção de dados cargo na string
		
			
		file = fopen(arquivo, "a");//atualização do arquivo
		fprintf(file,cargo);//cargo registrado no arquivo
		fclose(file);//fechamento do arquivo
		
		file = fopen(arquivo, "a");//atualização do arquivo
		fprintf(file, ",");//inserção de dados
		fclose(file);//fechamento do arquivo
	}	
	
int cnomes()//conferir nomes cadastrados
	{
		char cpf[40];//strings
		char arquivo[160];
		
		setlocale(LC_ALL, "Portuguese");//Definição de linguagem para português
		
		printf("Qual é o CPF do indivíduo: ");//texto
		scanf("%s", cpf);//inserção de dados cpf na string
		
		FILE *file;
		file = fopen(cpf,"r");//leitura de arquivo
		
		if(file == NULL)//caso o arquivo não exista
			{
				printf("Esse arquivo não existe\n");//texto			
			}	
			
		while(fgets(arquivo, 160, file) != NULL)//caso o arquivo extista
			{
				printf("\nEssas são as informações do usuario: ");//texto
				printf("%s", arquivo);//informações do usuario requisitado
				printf("\n\n");
			}	
			
		
		system("pause");//pausa a execução do aplicativo até que uma tecla seja pressionada
	}	

int dnomes()//deletar nomes cadastrados
	{
		char cpf[40];//strings
		
		printf("Qual o cpf do usuario a ser deletado: ");//texto
		scanf("%s",cpf);//inserção de informação
		
		remove(cpf);//remoção do arquivo
		
		FILE *file; //abrir arquivo
		file = fopen(cpf,"r");
		
		if(cpf == NULL);//caso o arquivo não exista
			{
				printf("O usuario não se encontra no sistema!\n");//texto
			}
		
		system("pause");//pausa até que uma tecla seja pressionada
	}	









int main()//programa principal
		{
			int opcao=0;//definindo variáeis
			int laco=1;
			
			for(laco=1;laco=1;)
				{
		
					setlocale(LC_ALL, "Portuguese");//definir a linguagem para português
					system("cls");//limpar a tela
					printf("#@ Cartório da EBAC @#\n\n");//inicio menu
					printf("Escolha a opção desejada\n\n");
					printf("\t1 - Registrar nomes\n");
					printf("\t2 - Consultar nomes\n");
					printf("\t3 - Deletar nomes\n\n");//fim menu
					printf("Opção:");//texto
					scanf("%d", &opcao);//seleção do menu
					
					system("cls");//limpar tela
					
					switch(opcao)//opções do menu
						{
							case 1://registrar nome
								rnomes();//função rnomes
							break;
							
							case 2://consultar nomes
								cnomes();//função cnomes
							break;
							
							case 3://deletar nome
								dnomes();//função dnomes
							break;
							
							default://caso o usuario insira uma opção invalida
								printf("\tEssa opção não existe\n");
								system("pause");
							break;
						}
						
				
				}
			}
