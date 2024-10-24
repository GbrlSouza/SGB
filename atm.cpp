#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Livro {
    string titulo;
    string autor;
    int id;
};

void adicionarLivro() {
    ofstream arquivo("biblioteca.txt", ios::app);
    Livro livro;
    cout << "Digite o ID do livro: ";
    cin >> livro.id;
    cin.ignore();
    cout << "Digite o título do livro: ";
    getline(cin, livro.titulo);
    cout << "Digite o autor do livro: ";
    getline(cin, livro.autor);
    arquivo << livro.id << ";" << livro.titulo << ";" << livro.autor << endl;
    arquivo.close();
}

void listarLivros() {
    ifstream arquivo("biblioteca.txt");
    string linha;
    while (getline(arquivo, linha)) {
        cout << linha << endl;
    }
    arquivo.close();
}

void buscarLivro() {
    ifstream arquivo("biblioteca.txt");
    string linha;
    string busca;
    cout << "Digite o título ou autor do livro que deseja buscar: ";
    cin.ignore();
    getline(cin, busca);
    bool encontrado = false;
    while (getline(arquivo, linha)) {
        if (linha.find(busca) != string::npos) {
            cout << "Livro encontrado: " << linha << endl;
            encontrado = true;
        }
    }
    if (!encontrado) {
        cout << "Livro não encontrado.\n";
    }
    arquivo.close();
}

int main() {
    int opcao;
    do {
        cout << "1. Adicionar Livro\n2. Listar Livros\n3. Buscar Livro\n0. Sair\nEscolha: ";
        cin >> opcao;
        switch (opcao) {
            case 1: adicionarLivro(); break;
            case 2: listarLivros(); break;
            case 3: buscarLivro(); break;
            case 0: cout << "Saindo...\n"; break;
            default: cout << "Opção inválida.\n";
        }
    } while (opcao != 0);
    return 0;
}
