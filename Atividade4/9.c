#include <stdio.h>
#include <time.h>
#include <string.h>
#include <locale.h>

struct Funcionario {
    char nome[50];
    char cargo[50];
    float salario;
    struct tm dataAdmissao; 
};

void darAumento(struct Funcionario *funcionario, float percentual) {
    funcionario->salario += (funcionario->salario * percentual / 100.0);
}

int calcularTempoNaEmpresa(struct Funcionario funcionario) {
    time_t now;
    time(&now);
    
    double diff = difftime(now, mktime(&funcionario.dataAdmissao));
    int years = (int)(diff / (60 * 60 * 24 * 365)); 
    
    return years;
}

int main() {
	
		setlocale(LC_ALL,"");
		
    struct Funcionario funcionario;
    
    printf("Informe o nome do funcionário: ");
    fgets(funcionario.nome, sizeof(funcionario.nome), stdin);
    funcionario.nome[strcspn(funcionario.nome, "\n")] = '\0'; 
    
    printf("Informe o cargo do funcionário: ");
    fgets(funcionario.cargo, sizeof(funcionario.cargo), stdin);
    funcionario.cargo[strcspn(funcionario.cargo, "\n")] = '\0'; 
    
    printf("Informe o salário do funcionário: ");
    scanf("%f", &funcionario.salario);
    
    printf("Informe a data de admissão do funcionário (ano mês dia): ");
    scanf("%d %d %d", &funcionario.dataAdmissao.tm_year, &funcionario.dataAdmissao.tm_mon, &funcionario.dataAdmissao.tm_mday);
    
    funcionario.dataAdmissao.tm_year -= 1900; 
    funcionario.dataAdmissao.tm_mon -= 1;   
    
    printf("Salário antes do aumento: %.2f\n", funcionario.salario);
    darAumento(&funcionario, 10.0);
    printf("Salário depois do aumento: %.2f\n", funcionario.salario);
    
    int tempoNaEmpresa = calcularTempoNaEmpresa(funcionario);
    printf("Tempo na empresa: %d anos\n", tempoNaEmpresa);
    
    return 0;
}
