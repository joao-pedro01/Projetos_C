/*
    Receber o nome de uma fruta e mostre quantas vogais tem. 
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i, count = 0;

    char fruit[20], letter;

    printf("Digite o nome de uma fruta: ");
    scanf("%s", fruit);

    for ( i = 0; i < 20; i++)
    {
        letter = toupper(fruit[i]);
        
        if(letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
        {
            count ++;
        }
    }

    printf("A fruta %s tem %i vogais", fruit, count);

    return 0;
}