#include <iostream>
using namespace std;

#include <C:\Users\User\TicTacToe-Upgraded\funcoesMatriz.h>


int main(){

int testaSeJogoAcaba = 0;
int vet[][];

int x;
int y;

int jogadorX = 0;
int jogadorY = 1;

while(acabaJogo == 0;){

cout << "Vez do Jogador X" << endl;
cout << "Escolha as coordenadas que deseja: " << endl;
cout << "Coordenada X: ";
cin >> x;

cout << "Coordenada Y: ";
cin >> y;

insere(x, y, jogadorX);
testaSeJogoAcaba = acabaJogo();

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
