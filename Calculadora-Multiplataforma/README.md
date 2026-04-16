# 🧮 Calculadora Híbrida em C (Windows & Linux)

Este é um projeto de uma calculadora funcional desenvolvida em Linguagem C, projetada para ser executada sem alterações tanto em ambientes **Windows** como **Linux**.

### 🛠️ Diferenciais Técnicos

O principal destaque deste projeto é o uso de **diretivas de pré-processamento** para garantir a compatibilidade multiplataforma:

* **Gestão de Terminal:** Utiliza `#ifdef _WIN32` para alternar automaticamente entre os comandos `cls` (Windows) e `clear` (Linux) ao limpar o ecrã.
* **Controlo de Fluxo:** Implementação de uma estrutura `do-while` que permite realizar múltiplas operações numa única sessão.
* **Lógica de Decisão:** Uso de `switch-case` para processar as quatro operações aritméticas básicas com validação de divisão por zero.
* **Limpeza de Buffer:** Técnica de manipulação de entrada de dados para evitar "atropelamentos" no terminal durante a leitura de caracteres.



### 🚀 Como Compilar e Rodar

**No Linux:**
1. Abra o terminal na pasta do ficheiro.
2. Compile com: `gcc Calculadora-C.c -o calculadora`
3. Execute com: `./calculadora`

**No Windows:**
1. Utilize o GCC (via MinGW ou VS Code).
2. Compile com: `gcc Calculadora-C.c -o calculadora.exe`
3. Execute o ficheiro `.exe` gerado.
