#include <iostream>
using std::cout;

#include "Pessoa.h"

int main(int argc, char **argv)
{
    Pessoa gilmo;
    int cpfCadastrar = 124;
    if( Pessoa::verifyCPF( cpfCadastrar ) )
        cout << "CPF valido.\n";
    else
        cout << "CPF invalido\n";
    
    //Pode ser usado com um objeto mas não precisa de objetos instânciados
    //if( gilmo.verifyCPF( cpfCadastrar ) )
    //    cout << "Tambem pode ser chamado por um objeto.\n";
    
    
    return 0;
}
