#include "Titular.hpp"
#include <iostream>

Titular::Titular(Cpf cpf, std::string nome, std::string senha) : Pessoa(cpf, nome), Autenticavel(senha)
{
};

void Titular::verificaTamanhoDoNome()
{
    if (nome.size() < 5) {
        std::cout << "Nome muito curto" << std::endl;
        exit(1);
    }
}