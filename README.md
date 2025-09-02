#  Desafio Super Trunfo – Países (Nível Novato)

Este projeto é a primeira etapa do *Desafio Super Trunfo – Países, onde criamos um sistema simples em **C* para comparar cartas de cidades com base em atributos como população, área, PIB, pontos turísticos e densidade populacional.

---

##  Objetivos

No nível *Novato*, o sistema deve:

- Permitir o *cadastro de duas cartas* de cidades.
- Armazenar informações como:
  - Estado
  - Código da carta
  - Nome da cidade
  - População
  - Área
  - PIB
  - Número de pontos turísticos
- Calcular a *densidade populacional* (população / área).
- Comparar os atributos das cartas utilizando estruturas condicionais (if e if-else).
- Determinar a carta vencedora:
  - *Maior valor vence, exceto para **densidade populacional, onde **o menor valor vence*.
- Exibir o resultado das comparações no terminal.

---

##  Entrada de Dados

Os dados das duas cartas devem ser informados *manualmente* pelo usuário via terminal, seguindo as solicitações do programa.

---

##  Saída de Dados

Após o cadastro, o sistema exibe o resultado das comparações:
---

##  Tecnologias Utilizadas

- Linguagem C
- Estruturas condicionais (if e if-else)
- Estrutura struct para organizar os atributos das cartas

---

##  Como Executar

1. Clone este repositório ou copie o código para um arquivo chamado super_trunfo.c.
2. Compile o programa:
   ```bash
   gcc super_trunfo.c -o super_trunfo
   
