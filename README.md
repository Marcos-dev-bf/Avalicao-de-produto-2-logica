# Sistema de Análise de Desempenho de Alunos

## Descrição

Este projeto foi desenvolvido em linguagem C como parte da disciplina de Logica.

O sistema realiza a análise do desempenho de uma turma de alunos, permitindo o cadastro das notas, cálculo das médias, classificação dos alunos, identificação da maior e menor média da turma e geração de um ranking em ordem decrescente.

## Objetivos

- Aplicar conceitos de programação estruturada.
- Utilizar vetores para armazenamento de dados.
- Utilizar estruturas de decisão (`if`, `else if` e `else`).
- Utilizar estruturas de repetição (`for`).
- Implementar funções para modularização do código.
- Implementar algoritmo de ordenação manual (Bubble Sort).

## Funcionalidades

O programa permite:

- Informar a quantidade de alunos.
- Cadastrar:
  - Código do aluno;
  - Nota 1;
  - Nota 2;
  - Nota 3.
- Calcular automaticamente a média de cada aluno.
- Classificar os alunos em:
  - Aprovado (média ≥ 7);
  - Recuperação (5 ≤ média < 7);
  - Reprovado (média < 5).
- Identificar:
  - Maior média da turma;
  - Menor média da turma.
- Ordenar os alunos da maior para a menor média.
- Exibir o ranking final.

## Estrutura do Programa

O código foi dividido em funções para facilitar a organização e manutenção.

### Funções implementadas

- `lerDados()`
  - Realiza a leitura dos dados dos alunos.

- `calcularMedias()`
  - Calcula a média de cada aluno.

- `classificarAlunos()`
  - Define a situação do aluno de acordo com sua média.

- `encontrarMaiorMenor()`
  - Localiza a maior e a menor média da turma.

- `ordenarPorMedia()`
  - Ordena os alunos utilizando o algoritmo Bubble Sort.

- `exibirRanking()`
  - Exibe o ranking final dos alunos e as maiores e menores médias.

## Tecnologias Utilizadas

- Linguagem C
- Compilador GCC
- Dev-C++

## Exemplo de Execução

```
Quantidade de alunos: 3

Aluno 1
Codigo: 101
Nota 1: 8
Nota 2: 7
Nota 3: 9

Aluno 2
Codigo: 102
Nota 1: 5
Nota 2: 6
Nota 3: 5

Aluno 3
Codigo: 103
Nota 1: 3
Nota 2: 4
Nota 3: 2

=========================
RANKING FINAL
=========================

1º Lugar -> Codigo: 101 | Media: 8.00 | Aprovado
2º Lugar -> Codigo: 102 | Media: 5.33 | Recuperacao
3º Lugar -> Codigo: 103 | Media: 3.00 | Reprovado

Maior media: 8.00
Menor media: 3.00
```

## Estruturas Utilizadas

- Vetores
- Funções
- Estruturas condicionais (`if`, `else if`, `else`)
- Estruturas de repetição (`for`)
- Bubble Sort
- Operadores lógicos e relacionais

## Aluno 

**Marcos Guilherme Ferreira Vitorio**

## Curso

**TADS - Tecnologia em analises e desenvolvimento de sistemas**
