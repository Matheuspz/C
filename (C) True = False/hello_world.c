#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool True = false;
    int i = 0;

    while (True == false)
    {
        while (i <= 10)
        {
            printf("Verdadeiro é Falso\n");
            i++;

            if (i == 10)
            {
                True = true;
            }
        }
    }

    printf("\nVerdadeiro é Verdadeiro\n\n");
    
    return 0; 
}