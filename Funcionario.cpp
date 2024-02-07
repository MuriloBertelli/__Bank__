#include "Funcionario.hpp"
#include <string>

Funcionario::Funcionario(Cpf cpf, std::string nome, float salario)
	: Pessoa(cpf, nome), salario(salario)
{
}
std::string Funcionario::recuperaNome() 
{
	return nome;
}