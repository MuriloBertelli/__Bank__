#pragma once
#include <string>
#include "Pessoa.hpp"
#include "Autenticavel.hpp"
#include "Cpf.hpp"

class Titular : public Pessoa, public Autenticavel
{
   
public:
    Titular(Cpf cpf, std::string nome,std::string senha);

private:
    void verificaTamanhoDoNome();
};

