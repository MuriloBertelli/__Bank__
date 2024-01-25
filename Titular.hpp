#pragma once
#include <string>
#include"Pessoa.hpp"
#include "Cpf.hpp"


#include "Pessoa.hpp"

class Titular : public Pessoa
{
public:
	Titular(Cpf cpf, std::string nome);
};

