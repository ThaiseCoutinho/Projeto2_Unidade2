#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"
#include "screen.h"

/**
 * @brief The Reta class implementa uma reta
 */
class Reta : public FiguraGeometrica
{   /**
     * @brief x0, coordenada x do primeiro ponto
     */
    int x0;
    /**
     * @brief y0, coordenada y do primeiro ponto
     */
    int y0;
    /**
     * @brief x1, coordenada x do segundo ponto
     */
    int x1;
    /**
     * @brief y1, coordenada y do segundo ponto
     */
    int y1;

public:
    /**
     * @brief Reta recebe
     * @param _x0, x do primeiro ponto
     * @param _y0, y do primeiro ponto
     * @param _x1, x do segundo ponto
     * @param _y1, y do segundo ponto
     */
    Reta(int _x0, int _y0, int _x1, int _y1);
    /**
     * @brief draw, método que desenha a reta.
     * @param t parâmetro do tipo Screen, onde será desenhada a reta.
     */
    void draw(Screen &t);
};

#endif // RETA_H
