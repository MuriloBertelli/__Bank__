#include "ContaPoupanca.hpp"
#include <iostream>

ContaPoupanca::ContaPoupanca(std::string numero, Titular titular): Conta(numero, titular)
{
}

ContaPoupanca::~ContaPoupanca()
{
    std::cout << "Destrutor da conta poupanca" << std::endl;
}

void ContaPoupanca::sacar(float valorASacar)
{
    if (valorASacar < 0) {
        std::cout << "Não pode sacar valor negativo" << std::endl;
        return;
    }
    float tarifaDeSaque = valorASacar * 0.003;
    float valorDoSaque = valorASacar + tarifaDeSaque;

    if (valorDoSaque > saldo) {
        std::cout << "Saldo insuficiente" << std::endl;
        return;
    }

    saldo -= valorDoSaque;
}


