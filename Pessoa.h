#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
using std::cout;



class Pessoa
{
public:
    Pessoa();
    ~Pessoa();
    
    //Método static
    static bool verifyCPF( int );

private:
    
    //Atributo noStatic
    int regGeral;
    
    //Atributo static
    static int numCPFCadastrados;

};

#endif // PESSOA_H
