#ifndef SCREEN_H
#define SCREEN_H
#include <vector>
#include <iostream>

using namespace std;
/**
 * @brief The Screen class fornece suporte para desenhar pontos em uma tela virtual.
 */

class Screen
{
private:
    /**
     * @brief numlin, número de linhas para o desenho na tela.
     */
    int numlin;
    /**
     * @brief numcol, número de colunas para o desenho na tela.
     */
    int numcol;
    /**
     * @brief brush, armazena o caractere usado para desenhar.
     */
    char brush;
    /**
     * @brief mat, matriz usada para desenhar na tela
     */
    vector<vector<char> >mat;
public:
    /**
     * @brief Screen, construtor que recebe as dimensões da tela.
     * @param _numlin, número de linha para o desenho.
     * @param _numcol, número de coluna para o desenho.
     */
    Screen(int _numlin, int _numcol);
    /**
     * @brief Screen
     */
    Screen();
    /**
     * @brief setPixel, desenha um pixel da matriz.
     * @param x, x do pixel que deseja modificar.
     * @param y, y do pixel que deseja modificar.
     */
    void setPixel(int x, int y);
    /**
     * @brief clear, limpar a tela.
     */
    void clear();
    /**
     * @brief setBrush, muda o caractere usado no desenho.
     * @param _brush, recebe o caractere que vai ser utilizado para desenhar.
     */
    void setBrush(char _brush);

    /** Envia a tela para um stream de saída.
     * @brief operator <<
     * @param os
     * @param t
     * @return
     */
    friend ostream& operator<<(ostream &os, Screen &t);
};

#endif // SCREEN_H
