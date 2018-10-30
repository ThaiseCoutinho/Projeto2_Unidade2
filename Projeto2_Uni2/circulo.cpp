#include "circulo.h"
#include <cmath>


Circulo::Circulo(int _xc, int _yc, int _r, int _mode)
{
    xc= _xc;
    xc= _yc;
    r= _r;
    mode= _mode;

}
void Circulo::draw(Screen &t)
{
    double calc=0;
    if(mode==0){
        //Ponto1
        int x=0;
        int y=r;
        int d=1-r;
        //Replicando
        t.setPixel(xc, yc-r);
        t.setPixel(xc, yc+r);
        t.setPixel(xc-r, yc);
        t.setPixel(xc+r, yc);
        //Demais pontos

        while(y>x){
            if(d<0){
                d=d+2*x+3;
                x=x+1;
            }else{
                d=d+2*(x-y)+5;
                x=x+1;
                y=y-1;
            }
         //Replicando
            t.setPixel(xc+x, yc+y);
            t.setPixel(xc+x, yc-y);
            t.setPixel(xc-x, yc+y);
            t.setPixel(xc-x, yc-y);
            t.setPixel(xc+y, yc+x);
            t.setPixel(xc+y, yc-x);
            t.setPixel(xc-y, yc+x);
            t.setPixel(xc-y, yc-x);

        }
    }

    if(mode==1){
        //r²=x²+y²
        for(int i=xc-r; i<=xc+r; i++){
            for(int j=yc-r;j<=yc+r; j++){
                calc=(pow((i-xc),2)+pow((j-yc),2));
                if(calc<=((r*r)+1)){
                    t.setPixel(i,j);
                }
            }
        }
    }
}

