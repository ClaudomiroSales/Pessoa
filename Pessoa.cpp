#include "Pessoa.h"

Pessoa::Pessoa()
{
    cout << "Criada uma pessoa.\n";
}

Pessoa::~Pessoa()
{
}

bool Pessoa::verifyCPF( int cpfTest )
{
    if ( cpfTest % 2 == 0 )
        return true;
    else
        return false;
}