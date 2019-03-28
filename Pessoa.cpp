#include "Pessoa.h"

//Pode ser inicializada no cpp
const int Pessoa::nDigitosCPF = 13;

Pessoa::Pessoa()
//:nDigitosCPF(0) é da classe e não do objeto
{
    cout << "Criada uma pessoa.\n";
    
    //ERROR - É const
    //nDigitosCPF += 1;
    
    //No construtor
    cout << "Construtor::nDigitosCPF " << nDigitosCPF << '\n';
    
    //Em um método no static
    methodNoStatic( );
}

Pessoa::~Pessoa()
{
}

void Pessoa::methodNoStatic( )
{
    cout << "MethodNoStatic::nDigitosCPF " << nDigitosCPF << '\n';
}