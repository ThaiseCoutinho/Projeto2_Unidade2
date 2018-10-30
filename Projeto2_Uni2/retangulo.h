#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"
#include "screen.h"

/**
 * @brief The Retangulo class implementa a figura geométrica retangulo
 */

class Retangulo : public FiguraGeometrica
{
    /**
     * @brief x, x do canto superior esquerdo do retangulo
     */
    int x;
    /**
     * @brief y, y do canto superior esquerdo do retangulo
     */
    int y;
    /**
     * @brief largura do retangulo.
     */
    int largura;
    /**
     * @brief altura do retangulo.
     */
    int altura;
    /**
     * @brief mode
     */
    int mode;
public:
    /**
     * @brief Retangulo, método que recebe as coordenadas do canto superior do retangulo.
     * @param _x, x do canto superior esquerdo.
     * @param _y, y do canto superior esquerdo.
     * @param _largura, largura do retangulo.
     * @param _altura, altura do retangulo.
     * @param _mode
     */
    Retangulo(int _x, int _y, int _largura, int _altura, int _mode);
    /**
     * @brief draw, método responsável pelo desenho do retangulo.
     * @param t parâmentro do tipo Screen, onde será desenhado o retangulo.
     */
    void draw(Screen &t);

};

#endif // RETANGULO_H
