#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
using std::cout;

class Pessoa
{
public:
    Pessoa();
    ~Pessoa();
private:
    
    //Variável static
    //Variável da classe
    //Instanciar ou no .h ou no cpp
    static int expectativaVida;
    
    //ERROR inicializar no .h
    //static int expectativaVida = 66;
    
    void methodNOstatic( );

};

#endif // PESSOA_H
