#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

#include "reta.h"
#include "screen.h"
#include "circulo.h"
#include "retangulo.h"
#include "figurageometrica.h"

using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;
    string a;
    Screen tela;
    vector <FiguraGeometrica*> fig;
    vector <FiguraGeometrica*>::iterator it;

    fin.open("/home/thaisecoutinho/Projeto2_Uni2/entrada.txt");
    if(fin.is_open()) cout<<"Arquivo de entrada aberto!"<<endl;
    else cout<<"Erro ao abrir o arquivo de entrada!"<<endl;

    fout.open("/home/thaisecoutinho/Projeto2_Uni2/saida.txt");
    if(fout.is_open()) cout<<"Arquivo de saida aberto!"<<endl;
    else cout<<"Erro ao abrir o arquivo de saída!"<<endl;

    while(fin.good()){
        getline(fin, a);
        if(fin.good()){
            string cmd;
            stringstream sstream(a);
            sstream >> cmd;
            if(cmd.compare("dim")==0){
                int x, y;
                sstream >> x >> y;
                tela = Screen(x,y);
            }
            if(cmd.compare("brush")==0){
                char c;
                sstream >> c;
                if(sstream.good()) tela.setBrush(c);
                else tela.setBrush(' ');
            }
            if(cmd.compare("line")==0){
                int x0, y0, x1, y1;
                sstream>>x0>>y0>>x1>>y1;
                fig.push_back(new Reta(x0,y0,x1,y1));
            }
            if(cmd.compare("rectangle")==0){
                int x0,y0,largura,altura,mode;
                sstream>>x0>>y0>>largura>>altura>>mode;
                fig.push_back(new Retangulo(x0,y0,largura,altura,mode));
            }
            if(cmd.compare("circle")==0){
                int x0,y0,raio,mode;
                sstream>>x0,y0,raio,mode;
                fig.push_back(new Circulo(x0,y0,raio,mode));
            }
        }
    }
    for(it=fig.begin();it != fig.end(); it++) (*it)->draw(tela);
    fin.close();

    //Métodos da classe Screen
    tela.setBrush('*');
    tela.setPixel(30,30);
    //tela.clear();
    cout<<tela;
    fout<<tela;
    fout.close();

    return 0;

}
