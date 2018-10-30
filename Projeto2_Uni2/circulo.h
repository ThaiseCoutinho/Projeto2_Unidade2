#ifndef CIRCULO_H
#define CIRCULO_H
#include "figurageometrica.h"
#include "screen.h"
/**
 * @brief The Circulo class Implementa a figura geométrica círculo
 */

class Circulo : public FiguraGeometrica
{
    /**
     * @brief xc amarzena x do centro do circulo
     */
    int xc;
    /**
     * @brief yc amarzena y do centro do circulo
     */
    int yc;
    /**
     * @brief r armazena o valor do raio
     */
    int r;
    /**
     * @brief mode armazena a forma como o circulo será desenhado (preenchido ou contorno.)
     */
    int mode;


public:
    /**
     * @brief Circulo Método que recebe as coordenadas do circulo, e a informação de preenchimento
     * @param _xc coordenada x do circulo
     * @param _yc coordenada y do circulo
     * @param _r raio do circulo
     * @param _mode informa se o circulo será preenchido ou contornado
     */
    Circulo(int _xc, int _yc, int _r, int _mode);
    /**
     * @brief draw desenha o circulo.
     * @param t tipo Screen, onde será desenhado o circulo.
     */
    void draw(Screen &t);
};

#endif // CIRCULO_H
