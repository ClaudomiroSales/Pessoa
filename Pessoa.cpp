#include "Pessoa.h"

//Inicializar a variável static no cpp da classe
int Pessoa::expectativaVida = 66;

Pessoa::Pessoa()
{
    cout << "Criada uma pessoa.\n";
    
    //Pode ser usada dentro de métodos não static
    cout << "Construtor. Expectativa de vida " << expectativaVida << '\n';
    
    methodNOstatic( );
}

Pessoa::~Pessoa()
{
}

void Pessoa::methodNOstatic( )
{
    expectativaVida += 1;
    cout << "Dentro de um metodo nao static. Pode ser alterada.\nExpectativa de vida " << expectativaVida << '\n';
}

