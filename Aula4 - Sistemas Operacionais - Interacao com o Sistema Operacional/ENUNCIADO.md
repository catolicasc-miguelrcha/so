### Objetivo
Desenvolver um programa em C que demonstre, na prática, como uma aplicação em user space depende do kernel para acessar recursos do sistema.

O programa deverá realizar operações de:

criação e leitura de arquivo

escrita em arquivo

criação de processo

identificação de processo

uso de memória

observação de chamadas ao sistema



Enunciado
Implemente um programa em C chamado teste_kernel.c que execute as seguintes etapas:

Parte 1 – Arquivo
Criar um arquivo chamado relatorio_so.txt

Escrever no arquivo:

nome do aluno

data

PID do processo

mensagem: "Teste prático de interação com o kernel"

Parte 2 – Processo
Criar um novo processo usando fork()

Fazer com que:

o processo pai escreva no terminal: "Processo pai em execução"

o processo filho escreva no terminal: "Processo filho em execução"

Parte 3 – Memória
Declarar um vetor de 10 posições do tipo int

Preencher esse vetor com valores de 0 a 9

Exibir os valores na tela

Parte 4 – Leitura do arquivo
Reabrir o arquivo criado

Ler e exibir seu conteúdo no terminal


Requisitos técnicos
O programa deve usar:

fopen, fprintf, fclose, fgets

fork

getpid

wait

estruturas básicas em C (if, for, while)

Para Windows, considerar os comandos relacionados.

Exemplo de saída esperada:

Processo filho em execução. PID = 422133
Conteúdo do vetor:
0 1 2 3 4 5 6 7 8 9

Conteúdo do arquivo:
Aluno: SEU_NOME_AQUI
PID do processo: 422120
Teste prático de interação com o kernel
Processo pai em execução. PID = 422120
Conteúdo do vetor:
0 1 2 3 4 5 6 7 8 9

Conteúdo do arquivo:
Aluno: SEU_NOME_AQUI
PID do processo: 422120
Teste prático de interação com o kernel

* A ordem da saída do programa pode ser diferente, pois Processo Pai e Processo Filho rodam em paralelo.

Material de Apoio em anexo.
