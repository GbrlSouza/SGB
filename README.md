# Gerenciador de Biblioteca

## Descrição

Este projeto é um gerenciador simples de biblioteca em C++ que permite ao usuário adicionar, listar e buscar livros. Os dados dos livros são armazenados em um arquivo de texto chamado `biblioteca.txt`. Cada livro contém um ID, um título e um autor.

## Funcionalidades

- **Adicionar Livro**: Permite ao usuário inserir informações sobre um livro (ID, título e autor), que são então salvas no arquivo.
- **Listar Livros**: Exibe todos os livros armazenados no arquivo, mostrando cada entrada em uma nova linha.
- **Buscar Livro**: Permite ao usuário buscar um livro pelo título ou autor. Se encontrado, exibe os detalhes do livro; caso contrário, informa que o livro não foi encontrado.

## Estrutura do Código

O programa é estruturado em torno da estrutura `Livro`, que contém as seguintes propriedades:

- `titulo`: O título do livro.
- `autor`: O autor do livro.
- `id`: Um identificador único para o livro.

### Funções Principais

1. **`adicionarLivro()`**:
   - Solicita ao usuário que insira o ID, título e autor do livro.
   - Salva as informações no arquivo `biblioteca.txt`.

2. **`listarLivros()`**:
   - Lê o arquivo `biblioteca.txt` e imprime cada linha na tela.

3. **`buscarLivro()`**:
   - Solicita ao usuário um título ou autor para busca.
   - Procura no arquivo e exibe o livro correspondente, se encontrado.

4. **`main()`**:
   - Apresenta um menu interativo para o usuário escolher entre adicionar, listar ou buscar livros.
   - Permite que o usuário continue utilizando o sistema até que escolha sair.

## Uso

Para utilizar o gerenciador de biblioteca, siga as instruções abaixo:

1. Compile o código usando um compilador de C++ (por exemplo, `g++`):
   ```bash
   g++ -o gerenciador_biblioteca gerenciador_biblioteca.cpp
   ```

2. Execute o programa:
   ```bash
   ./gerenciador_biblioteca
   ```

3. Siga as instruções no menu para adicionar, listar ou buscar livros.

## Dependências

- Nenhuma dependência externa é necessária. O programa utiliza apenas bibliotecas padrão do C++ (`iostream`, `fstream`, `string`).

## Conclusão

Este gerenciador de biblioteca em C++ é uma aplicação simples, mas funcional, que pode ser expandida com mais recursos, como edição e remoção de livros, ou até mesmo a implementação de uma interface gráfica. Sinta-se à vontade para personalizar e aprimorar o código conforme necessário.

--- 

Sinta-se à vontade para ajustar o texto conforme suas necessidades!
