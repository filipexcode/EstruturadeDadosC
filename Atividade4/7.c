#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

struct ContaBancaria {
    char titular[50];
    int numeroConta;
    float saldo;

};

void depositar(struct ContaBancaria *conta, float valor) {
    conta->saldo += valor;
    printf("Depósito de R$ %.2f realizado com sucesso.\n", valor);
}

void sacar(struct ContaBancaria *conta, float valor) {
    if (valor <= conta->saldo) {
        conta->saldo -= valor;
        printf("Saque de R$ %.2f realizado com sucesso.\n", valor);
    } else {
        printf("Saldo insuficiente para realizar o saque.\n");
    }
}

float verificarSaldo(struct ContaBancaria *conta) {
    return conta->saldo;
}

int main() {

		setlocale(LC_ALL,"");

    struct ContaBancaria conta;
    strcpy(conta.titular, "Maria Silva");
    conta.numeroConta = 12345;
    conta.saldo = 1000.0;

    printf("\nNome do Titular: %s\n", conta.titular);
   
    printf("Número da conta bancária: %lld\n", conta.numeroConta);
   
    printf("Saldo atual: R$ %.2f\n", verificarSaldo(&conta));

    depositar(&conta, 500.0);
    printf("Saldo após depósito: R$ %.2f\n", verificarSaldo(&conta));

    sacar(&conta, 200.0);
    printf("Saldo após saque: R$ %.2f\n", verificarSaldo(&conta));

    sacar(&conta, 1500.0); 
    printf("Saldo final: R$ %.2f\n", verificarSaldo(&conta));

    return 0;
}
