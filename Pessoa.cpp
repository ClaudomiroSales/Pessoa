#include "Pessoa.h"

int Pessoa::numCPFCadastrados = 0;

Pessoa::Pessoa()
{
    cout << "Criada uma pessoa.\n";
    numCPFCadastrados++;
}

Pessoa::~Pessoa()
{
}

bool Pessoa::verifyCPF( int cpfTest )
{
    //Usando um atributo noStatic
    //ERROR um atributo de objeto usado em um método da classe
    //regGeral = 673934;
    //cout << regGeral;
    
    cout << "Numero CPFs "  << numCPFCadastrados << '\n';
    
    if ( cpfTest % 2 == 0 )
        return true;
    else
        return false;
}