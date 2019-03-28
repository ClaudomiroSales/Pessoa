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
    
    //criada uma variável const static
    const static int nDigitosCPF;
    
    //Pode inicializar no .h
    //const static int nDigitosCPF = 13;
    
    //Pode ser inicializada no cpp
    
    //Mesmo sem inicialização não ocorre erro se não for usada em lugar algum
    //Mas ocorre um erro se foi usada sem inicialização
    
    void methodNoStatic( );

};

#endif // PESSOA_H
