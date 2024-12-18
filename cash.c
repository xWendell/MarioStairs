#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // input do valor do troco
    float valortroco;

    do
    {
        valortroco = get_float("Troco: ");
    }
    while (valortroco < 0);

    printf("Troco necessário: %.2f\n", valortroco);

    // conversão do valor do troco em float para int
    int converter = round(valortroco * 100);

    // contador de moedas
    int conta = 0;

    // verifica o valor da moeda
    for (int x = 0; x < converter; x += 0)
    {
        if (converter >= 25)
        {
            converter -= 25;
            conta = conta + 1;
        }
        else if (converter >= 10 && converter < 25)
        {
            converter -= 10;
            conta = conta + 1;
        }
        else if (converter >= 5 && converter < 10)
        {
            converter -= 5;
            conta = conta + 1;
        }
        else if (converter >= 1 && converter < 5)
        {
            converter -= 1;
            conta = conta + 1;
        }
    }
    printf("Moedas: %d\n", conta);
}
