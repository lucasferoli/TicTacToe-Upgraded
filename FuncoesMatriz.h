#ifndef FUNCOESMATRIZ_H
#define FUNCOESMATRIZ_H

class FuncoesMatriz {
private:
    int vet[3][3];
public:
    FuncoesMatriz();
    void insere(int x, int y, int jogador);
    void acabaJogo(int x, int y, int jogador);
    void imprime();
};

#endif // FUNCOESMATRIZ_H