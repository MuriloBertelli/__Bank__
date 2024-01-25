#pragma once
#include "Cpf.hpp"
#include <string>

class Pessoa
{
private:
    Cpf cpf;
    std::string nome;

public:
    Pessoa(Cpf cpf, std::string nome);

private:
    void verificaTamanhoDoNome();
};


