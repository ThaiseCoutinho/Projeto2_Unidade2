#include "screen.h"
#include <iostream>

using namespace std;

Screen::Screen(int _numlin, int _numcol)
{
    numlin = _numlin;
    numcol = _numcol;

    brush = ' ';
    mat = vector<vector<char> >(numlin, vector<char>(numcol,0));

    for(int i=0; i<numlin; i++){
        for(int j=0; j<numcol;j++){
            mat[i][j]=brush;
        }
    }
}
Screen::Screen()
{

}
void Screen::setPixel(int x, int y)
{
    if(x>=0 && y>=0) mat[x][y]=brush;
}
void Screen::clear()
{
    for(int i=0; i<numlin; i++){
        for(int j=0; j<numcol; j++){
            mat[i][j]= ' ';
        }
    }
}
void Screen::setBrush(char _brush)
{
    brush= _brush;
}
ostream& operator<<(ostream &os, Screen &t)
{
    for(int i=0; i<t.numlin; i++){
        for(int j=0; j<t.numcol; j++){
            os << t.mat[i][j];
        }
        os << endl;
    }
    return (os);
}

