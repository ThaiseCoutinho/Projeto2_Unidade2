#include "reta.h"
#include "screen.h"
#include <iostream>
#include <cmath>

using namespace std;
Reta::Reta(int _x0, int _y0, int _x1, int _y1)
{
    x0= _x0;
    y0= _y0;
    x1= _x1;
    y1= _y1;

}
void Reta::draw(Screen &t)
{
    int i;
    float x, y, tam, Dx, Dy;

    x=x0;
    y=y0;
    if(abs(x1-x0) > abs(y1-y0)) tam=abs(x1-x0);
    else tam=abs(y1-y0);

    Dx= abs(x1-x0)/tam;
    Dy= abs(y1-y0)/tam;

    i=1;

    while(i<=tam)
    {
        t.setPixel(round(x), round(y));

        x=x+Dx;
        y=y+Dy;
        i++;
    }

}

