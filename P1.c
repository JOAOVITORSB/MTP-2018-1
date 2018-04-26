// João Vitor Silva Brandão MAT: 11511ETE006 //

#include <stdio.h>

main()
{
    char bits[256];

    scanf("%s", bits);

    int i = 0, estado = 0;

    while(bits[i] != '\0')
    {
        switch(estado)
        {
        case 0:
            if(bits[i] == '0')
            {
                estado = 0;
            }
            else
            {
                estado = 1;
            }
            break;
        case 1:
            if(bits[i] == '0')
            {
                estado = 2;
            }
            else
            {
                estado = 0;
            }
            break;
        case 2:
            if(bits[i] == '0')
            {
                estado = 1;
            }
            else
            {
                estado = 2;
            }
            break;
        }

        i++;
    }

    printf("%s ", bits);

    if(estado == 0)
    {
        printf("eh multiplo de 3.\n");
    }
    else
    {
        printf("nao e multiplo de 3.\n");
    }
}