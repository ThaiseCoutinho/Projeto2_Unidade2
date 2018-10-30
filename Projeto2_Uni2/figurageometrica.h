#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "screen.h"
/**
 * @brief The FiguraGeometrica class caracteriza objetos genérico.
 */

class FiguraGeometrica
{
public:
    /**
     * @brief FiguraGeometrica construtor
     */
    FiguraGeometrica();
    /**
     * @brief draw função virtual implementada nas classe derivadas.
     * @param t
     */
    virtual void draw(Screen &t)=0;
};

#endif // FIGURAGEOMETRICA_H
