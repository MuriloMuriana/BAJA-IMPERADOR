#include <stdio.h>
#include <stdbool.h>



void exibir_status(int volta, float suspensao, float combustivel, float temperatura_motor, float combustivel_l) {
    printf("  Total de voltas: %d\n", volta);
    printf("  Suspensao: %.1f%%\n", suspensao);
    printf("  Combustivel: %.1f%% (%.1f Litros)\n", combustivel, combustivel_l);
    printf("  Temperatura do motor: %.1f Graus Celsius\n\n", temperatura_motor);
}

int main() {
    float suspensao = 100;
    float combustivel = 100;
    float combustivel_l = 50; //capacidade total do tanque de combustivel em litros
    float temperatura_motor = 80;
    bool corrida_ativa = 1;
    int motivo_falha = 0; // (0: não falhou, 1: falha na suspensão, 2: falha no combustível)
    int volta_falha = 0;

    printf("-=-=-=-= SIMULAR ENDURO BAJA =-=-=-=-");
    printf("\nDados Iniciais:\n");
    printf("  Suspensao: 100%%\n");
    printf("  Combustivel: 100%% (%1.f Litros)\n", combustivel_l);
    printf("  Temperatura do motor: 80 Graus Celsius\n\n");

    for (int volta = 1; volta <= 100 && corrida_ativa; volta = volta + 1) {
        suspensao = suspensao - 2;
        combustivel = combustivel - 1.5;
        temperatura_motor = temperatura_motor + 1;

        if (volta % 10 == 0) {
            suspensao = suspensao - 3;
            temperatura_motor = temperatura_motor + 5;
        }

        if (suspensao < 20) {
            printf("Taxa de Suspensao critica na volta %d: %.1f%%\n", volta, suspensao);
        }
        if (temperatura_motor > 115.0) {
            printf("Temperatura do motor critica na volta %d: %.1f Graus Celsius\n", volta, temperatura_motor);
        }

        if (suspensao <= 0) {
            corrida_ativa = 0;
            motivo_falha = 1;
            volta_falha = volta;
        } else if (combustivel <= 0) {
            corrida_ativa = 0;
            motivo_falha = 2;
            volta_falha = volta;
        }
        if (volta % 20 == 0 ) {
            printf("\n-=-=-=-= RELATORIO DE STATUS - VOLTA %d =-=-=-=-\n", volta);
            exibir_status(volta, suspensao, combustivel, temperatura_motor, combustivel_l*combustivel/100);
        }
    }


    printf("\n-=-=-=-= RESULTADO FINAL =-=-=-=-\n");
    if (motivo_falha == 0) {
        printf("-> Corrida concluida com sucesso!\n");
        volta_falha = 100;
    }
    if (motivo_falha == 1) {
        printf("-> FALHA: Suspensao chegou a zero na volta %d!\n", volta_falha);
    }
    if (motivo_falha == 2) {
        printf("-> FALHA: Combustivel chegou a zero na volta %d!\n", volta_falha);
    }

    exibir_status(volta_falha, suspensao, combustivel, temperatura_motor, combustivel_l*combustivel/100);

    return 0;
}
