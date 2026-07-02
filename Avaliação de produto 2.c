#include <stdio.h>
#define MAX 100

void lerDados(
    int codigo[],
    float nota1[],
    float nota2[],
    float nota3[],
    int n);

void calcularMedias(
    float nota1[],
    float nota2[],
    float nota3[],
    float media[],
    int n);

void classificarAlunos(
    float media[],
    char situacao[][20],
    int n);

void encontrarMaiorMenor(
    float media[],
    int n,
    float *maior,
    float *menor);

void ordenarPorMedia(
    int codigo[],
    float media[],
    char situacao[][20],
    int n);

void exibirRanking(
    int codigo[],
    float media[],
    char situacao[][20],
    int n,
    float maior,
    float menor);

int main()
{
    // Quantidade de alunos
    int n;

    // Vetores para armazenar os dados dos alunos
    int codigo[MAX];

    float nota1[MAX];
    float nota2[MAX];
    float nota3[MAX];
    float media[MAX];

    // Vetor que guarda a situação de cada aluno
    char situacao[MAX][20];

    // Variáveis para armazenar maior e menor média
    float maior;
    float menor;

	// Solicita ao usuário quantos alunos serão cadastrados
    printf("Quantidade de alunos: ");
    scanf("%d", &n);

    // Realiza todas as etapas do processamento
	lerDados(codigo, nota1, nota2, nota3, n);
	
	calcularMedias(nota1, nota2, nota3, media, n);
	
	classificarAlunos(media, situacao, n);
	
	encontrarMaiorMenor(media, n, &maior, &menor);
	
	// Ordena os alunos da maior para a menor média
	ordenarPorMedia(codigo, media, situacao, n);
	
	// Exibe o ranking final
	exibirRanking(
	    codigo,
	    media,
	    situacao,
	    n,
	    maior,
	    menor);
    return 0;
}
// Lê o código e as três notas de cada aluno
void lerDados(
    int codigo[],
    float nota1[],
    float nota2[],
    float nota3[],
    int n)
{
    int i;

	
    // Percorre todos os alunos informados pelo usuário
	for(i = 0; i < n; i++)
    {
        printf("\nAluno %d\n", i + 1);

        printf("Codigo: ");
        scanf("%d", &codigo[i]);

        printf("Nota 1: ");
        scanf("%f", &nota1[i]);

        printf("Nota 2: ");
        scanf("%f", &nota2[i]);

        printf("Nota 3: ");
        scanf("%f", &nota3[i]);
    }
}

// Calcula a média de cada aluno
void calcularMedias(
    float nota1[],
    float nota2[],
    float nota3[],
    float media[],
    int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
    	// Soma as três notas e divide por 3
        media[i] =
            (nota1[i] + nota2[i] + nota3[i]) / 3.0;
    }
}

// Define a situação do aluno de acordo com sua média
void classificarAlunos(
    float media[],
    char situacao[][20],
    int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
    	// Média maior ou igual a 7
        if(media[i] >= 7)
        {
            sprintf(situacao[i], "Aprovado");
        }
        // Média entre 5 e 6,99
        else if(media[i] >= 5)
        {
            sprintf(situacao[i], "Recuperacao");
        }
        // Média abaixo de 5
        else
        {
            sprintf(situacao[i], "Reprovado");
        }
    }
}
// Procura a maior e a menor média da turma
void encontrarMaiorMenor(
    float media[],
    int n,
    float *maior,
    float *menor)
{
    int i;
	// Inicialmente considera a primeira média como maior e menor
    *maior = media[0];
    *menor = media[0];

    for(i = 1; i < n; i++)
    {
    	// Atualiza a menor média encontrada
        if(media[i] > *maior)
        {
            *maior = media[i];
        }
        
		// Atualiza a menor média encontrada
        if(media[i] < *menor)
        {
            *menor = media[i];
        }
    }
}

// Ordena os alunos utilizando o método Bubble Sort
void ordenarPorMedia(
    int codigo[],
    float media[],
    char situacao[][20],
    int n)
{
    int i, j;
    
	// Percorre o vetor diversas vezes realizando as trocas necessárias
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
        	// Se a média atual for menor que a próxima,
			// troca os dados para manter em ordem decrescente
            if(media[j] < media[j + 1])
            {	
            	// Variáveis auxiliares utilizadas durante a troca
                float tempMedia;
                int tempCodigo;
                char tempSituacao[20];

                tempMedia = media[j];
                media[j] = media[j + 1];
                media[j + 1] = tempMedia;

                tempCodigo = codigo[j];
                codigo[j] = codigo[j + 1];
                codigo[j + 1] = tempCodigo;

                sprintf(tempSituacao, "%s", situacao[j]);
                sprintf(situacao[j], "%s", situacao[j + 1]);
                sprintf(situacao[j + 1], "%s", tempSituacao);
            }
        }
    }
}
// Mostra o ranking final e as informações da turma
void exibirRanking(
    int codigo[],
    float media[],
    char situacao[][20],
    int n,
    float maior,
    float menor)
{
    int i;

    printf("\n=========================\n");
    printf("RANKING FINAL\n");
    printf("=========================\n");
    
	// Exibe todos os alunos já ordenados
    for(i = 0; i < n; i++)
    {
        printf(
            "%dº Lugar -> Codigo: %d | Media: %.2f | %s\n",
            i + 1,
            codigo[i],
            media[i],
            situacao[i]);
    }
	// Exibe a maior e a menor média encontradas
    printf("\nMaior media: %.2f\n", maior);
    printf("Menor media: %.2f\n", menor);
}
