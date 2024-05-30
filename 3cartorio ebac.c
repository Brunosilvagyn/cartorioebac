#include <stdio.h>  //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação  de espaço em memória 
#include <locale.h> //biblioteca de alocações de texto por região 
#include <string.h> //bibli	oteca responsavel por cuidar do string 

int registro () // função responsável por cadastrar usuarios no sistema 
{
	
	// inicio criação de variaveis/string
	
	    char arquivo[40];
		char cpf [40];
		char nome [40];
		char sobrenome [40];
		char cargo[40];
		// final da criação de variaveis/string
		
		printf("digite o CPF a ser cadastrado:"); //coletando informação do usuario 
		scanf("%s", cpf); //%s refere-se ao string 
		
		strcpy(arquivo,cpf); // responsavel por copiar os valores do string
		
		FILE *file; //cria o arquivo 
		file = fopen(arquivo, "w"); //cria o arquivo e o "w" significa escrever 
		fprintf(file,cpf); //salva o valor da variável 
		fclose(file); //fecha o arquivo 
		
		file = fopen(arquivo, "a"); //cria o arquivo
		fprintf(file,","); //salva o arquivo 
		fclose(file); //fecha o arquivo
		
		printf("digite o nome a ser cadastrado: "); //coletando informação do usuario 
		scanf("%s",nome); // refere-se ao string
		
		file = fopen(arquivo,"a"); //cria o arquivo
		fprintf(file,nome); //salva o arquivo 
		fclose(file); //fecha o arquivo
		
		file = fopen(arquivo, "a"); //cria o arquivo 
		fprintf(file,","); //salva o arquivo 
		fclose(file); //fecha o arquivo 
		
		printf("digite o sobrenome a ser cadastrado:"); //coletando informação do usuario 
		scanf("%s",sobrenome); //refere-se ao string  
		
		file = fopen(arquivo,"a"); //cria o arquivo 
		fprintf(file,sobrenome); //salva o arquivo 
		fclose(file); //fecha o arquivo 
		
		file = fopen(arquivo, "a"); //cria o arquivo
		fprintf(file,","); //salva o arquivo 
		fclose(file); //fecha o arquivo 
		
		printf("digite o cargo a ser cadastrado: "); //coletando informação do usuario 
		scanf("%s",cargo); //refere-se ao string 
		
		file = fopen(arquivo, "a"); //cria o arquivo
		fprintf(file,cargo); //salva o arquivo 
		fclose(file); //fecha o arquivo 
		
		system("pause"); 
		
	}

int consulta()
{
	   	setlocale(LC_ALL, "Portuguese"); //definindo linguagem
       //inicio da criação de variáveis
	    char cpf [40];
	    char conteudo [200];
	    //fim da criação de variaveis
	    
	    printf("digite o cpf a ser consultado: "); //coletando informação do usuario 
	    scanf("%s",cpf); //refere se ao string 
	    
	    FILE *file; //cria o arquivo
	    file = fopen(cpf,"r"); //salva o arquivo 
	    
	    if (file== NULL)
	    
	    {
	    	printf("não foi possível abrir o arquivo, não localizado!. \n");	
		}
		
		while(fgets(conteudo, 200, file) != NULL)
		{
			printf("\nEssas são as informações do usuario: ");	
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
	   	printf("o usuário não se encontra no sistema!. \n");
	   	system("pause");
	   }
}

int main ()
{
	int opcao=0; //definindo variáveis 
	int laco=1;
		
	for(laco=1;laco=1;)
	{
		
    	system("cls");	//responsável por limpar a tela 
    	
    	setlocale(LC_ALL, "Portuguese"); //definindo linguagem
	
	    printf("cartório da ebac ###\n\n"); //inicio do menu 
	    printf("escolha a opção desejada do menu:\n\n");
	    printf("\t1 - registrar nomes \n");
    	printf("\t2 - consultar nomes \n");
     	printf("\t3 - deletar nomes \n");
     	printf("\t4 - sair do sistema \n\n");
    	printf("opção: ");  //fim do menu 
	
        scanf("%d" , &opcao); //armazenando a escolha do usuario 
    
         system("cls"); // responsável por limpar a tela
         
         switch(opcao) //inicio da seleção do menu 
         
         {
       	case 1:
        registro(); //chamada de função 
       	break;
         	
        case 2:
       	consulta(); //chamada de função 
	   	break;
	    	
	    case 3: 
	    deletar(); //chamda de função 
	    break;
	    
	    case 4:
	    printf("obrigado por utilizar o sistema!");
	    return 0;
	    break;
	    	
	    default:
	    printf("essa opcao nao esta disponivel!");
        system("pause");
        break;
	    
		 } // fim da seleção 
    
}

}


	

