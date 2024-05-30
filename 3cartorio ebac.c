#include <stdio.h>  //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o  de espa�o em mem�ria 
#include <locale.h> //biblioteca de aloca��es de texto por regi�o 
#include <string.h> //bibli	oteca responsavel por cuidar do string 

int registro () // fun��o respons�vel por cadastrar usuarios no sistema 
{
	
	// inicio cria��o de variaveis/string
	
	    char arquivo[40];
		char cpf [40];
		char nome [40];
		char sobrenome [40];
		char cargo[40];
		// final da cria��o de variaveis/string
		
		printf("digite o CPF a ser cadastrado:"); //coletando informa��o do usuario 
		scanf("%s", cpf); //%s refere-se ao string 
		
		strcpy(arquivo,cpf); // responsavel por copiar os valores do string
		
		FILE *file; //cria o arquivo 
		file = fopen(arquivo, "w"); //cria o arquivo e o "w" significa escrever 
		fprintf(file,cpf); //salva o valor da vari�vel 
		fclose(file); //fecha o arquivo 
		
		file = fopen(arquivo, "a"); //cria o arquivo
		fprintf(file,","); //salva o arquivo 
		fclose(file); //fecha o arquivo
		
		printf("digite o nome a ser cadastrado: "); //coletando informa��o do usuario 
		scanf("%s",nome); // refere-se ao string
		
		file = fopen(arquivo,"a"); //cria o arquivo
		fprintf(file,nome); //salva o arquivo 
		fclose(file); //fecha o arquivo
		
		file = fopen(arquivo, "a"); //cria o arquivo 
		fprintf(file,","); //salva o arquivo 
		fclose(file); //fecha o arquivo 
		
		printf("digite o sobrenome a ser cadastrado:"); //coletando informa��o do usuario 
		scanf("%s",sobrenome); //refere-se ao string  
		
		file = fopen(arquivo,"a"); //cria o arquivo 
		fprintf(file,sobrenome); //salva o arquivo 
		fclose(file); //fecha o arquivo 
		
		file = fopen(arquivo, "a"); //cria o arquivo
		fprintf(file,","); //salva o arquivo 
		fclose(file); //fecha o arquivo 
		
		printf("digite o cargo a ser cadastrado: "); //coletando informa��o do usuario 
		scanf("%s",cargo); //refere-se ao string 
		
		file = fopen(arquivo, "a"); //cria o arquivo
		fprintf(file,cargo); //salva o arquivo 
		fclose(file); //fecha o arquivo 
		
		system("pause"); 
		
	}

int consulta()
{
	   	setlocale(LC_ALL, "Portuguese"); //definindo linguagem
       //inicio da cria��o de vari�veis
	    char cpf [40];
	    char conteudo [200];
	    //fim da cria��o de variaveis
	    
	    printf("digite o cpf a ser consultado: "); //coletando informa��o do usuario 
	    scanf("%s",cpf); //refere se ao string 
	    
	    FILE *file; //cria o arquivo
	    file = fopen(cpf,"r"); //salva o arquivo 
	    
	    if (file== NULL)
	    
	    {
	    	printf("n�o foi poss�vel abrir o arquivo, n�o localizado!. \n");	
		}
		
		while(fgets(conteudo, 200, file) != NULL)
		{
			printf("\nEssas s�o as informa��es do usuario: ");	
			printf("%s", conteudo);
			printf("\n\n");
		}
		 system("pause");
}

int deletar ()
{
	   char cpf [40];
	   
	   printf("digite o CPF a ser deletado: ");
	   scanf("%s",cpf);
	   
	   remove(cpf);
	   
	   FILE *file;
	   file = fopen(cpf, "r");
	   
	   if(file == NULL)
	   {
	   	printf("o usu�rio n�o se encontra no sistema!. \n");
	   	system("pause");
	   }
}

int main ()
{
	int opcao=0; //definindo vari�veis 
	int laco=1;
		
	for(laco=1;laco=1;)
	{
		
    	system("cls");	//respons�vel por limpar a tela 
    	
    	setlocale(LC_ALL, "Portuguese"); //definindo linguagem
	
	    printf("cart�rio da ebac ###\n\n"); //inicio do menu 
	    printf("escolha a op��o desejada do menu:\n\n");
	    printf("\t1 - registrar nomes \n");
    	printf("\t2 - consultar nomes \n");
     	printf("\t3 - deletar nomes \n");
     	printf("\t4 - sair do sistema \n\n");
    	printf("op��o: ");  //fim do menu 
	
        scanf("%d" , &opcao); //armazenando a escolha do usuario 
    
         system("cls"); // respons�vel por limpar a tela
         
         switch(opcao) //inicio da sele��o do menu 
         
         {
       	case 1:
        registro(); //chamada de fun��o 
       	break;
         	
        case 2:
       	consulta(); //chamada de fun��o 
	   	break;
	    	
	    case 3: 
	    deletar(); //chamda de fun��o 
	    break;
	    
	    case 4:
	    printf("obrigado por utilizar o sistema!");
	    return 0;
	    break;
	    	
	    default:
	    printf("essa opcao nao esta disponivel!");
        system("pause");
        break;
	    
		 } // fim da sele��o 
    
}

}


	

