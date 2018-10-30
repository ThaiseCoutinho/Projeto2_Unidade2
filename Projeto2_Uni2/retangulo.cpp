#include "retangulo.h"
#include "reta.h"

Retangulo::Retangulo(int _x, int _y, int _largura, int _altura, int _mode)
{

    x=_x;
    y=_y;
    largura=_largura;
    altura=_altura;
    mode=_mode;
}
void Retangulo::draw(Screen &t)
{

    if(mode==1){
        for(int i=x; i<(x+largura);i++){
            for(int j=y;j<(y+altura);j++) t.setPixel(i,j);
        }
    }else{
        largura--;
        altura--;
        Reta r1(x, y, (x+largura), y);
        Reta r2((x+largura), y, (x+largura), (y+altura));
        Reta r3(x, (y+altura), (x+largura), (y+altura));
        Reta r4(x, y, x, (y+altura));
        r1.draw(t);
        r2.draw(t);
        r3.draw(t);
        r4.draw(t);
        t.setPixel((x+largura), (y+altura));

    }
}

