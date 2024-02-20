#include <iostream>
#include <string>
#include "Conta.hpp"
#include "ContaPoupanca.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"
#include "Funcionario.hpp"


using namespace std;

void ExibeSaldo(const Conta& conta)
{
    cout << "O saldo da conta é: " << conta.recuperaSaldo() << endl;
}

void RealizaSaque(Conta&conta)
{
    conta.sacar(200);
}
int main()
{
    Titular titular(Cpf("123.456.789-10"), "Vinicius Moares");
    
    ContaPoupanca umaConta("123456", titular);
    umaConta.depositar(500);
    RealizaSaque(umaConta);

    ExibeSaldo(umaConta);

    Titular outro(Cpf("098.765.432-10"), "Dias Cabal");
    Conta umaOutraConta("654321", titular);
    umaOutraConta.depositar(300);
    RealizaSaque(umaOutraConta);

    ExibeSaldo(umaOutraConta);

    cout << "Número de contas: " << Conta::recuperaNumeroDeContas() << endl;

    Funcionario funcionario(Cpf("123.231.323-01"), "Dias Vinicios", 1032);

    cout << "Nome do funcionario: " << funcionario.recuperaNome() << endl;

    return 0;
}
