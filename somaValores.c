#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float soma(float *v1, float *v2);

    float valor1 = 0, valor2 = 0;

    // COLETA DE VALORES...
    printf("Informe o valor de A: ");
    scanf("%f", &valor1);
    printf("Informe o valor de B: ");
    scanf("%f", &valor2);

    // PASSA OS DADOS DO ENDEREÇO DE MEMÓRIA DE valor1 e valor2 para a função soma()...
    printf("Soma: %.2f\n", soma(&valor1, &valor2));
    system("PAUSE");
    return 0;
}

// SOMA OS DOIS VALORES PASSADOS POR REFERÊNCIA...
float soma(float *v1, float *v2)
{
    return *v1 + *v2;
}
