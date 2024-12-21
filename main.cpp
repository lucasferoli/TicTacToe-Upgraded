#include <iostream>
using namespace std;

#include <C:\Users\User\TicTacToe-Upgraded\funcoesMatriz.h>


int main(){

int testaSeJogoAcaba = 0;
int vet[3][3] = {0};

int x;
int y;

int jogadorX = 0;
int jogadorO = 1;

while(testaSeJogoAcaba == 0){

cout << "Vez do Jogador X" << endl;
cout << "Escolha as coordenadas que deseja: " << endl;
cout << "Coordenada X: ";
cin >> x;

cout << "Coordenada Y: ";
cin >> y;

insere(vet, x, y, jogadorX);
cout << "Como a tabela se encontra: ";
imprime(vet);

testaSeJogoAcaba = acabaJogo(vet);

cout << "Vez do Jogador Y" << endl;
cout << "Escolha as coordenadas que deseja: " << endl;
cout << "Coordenada X: ";
cin >> x;

cout << "Coordenada Y: ";
cin >> y;

insere(x, y, jogadorO);
testaSeJogoAcaba = acabaJogo();
}

    return 0;
}
