//João Vitor Silva Brandão Mat: 11511ETE006 //

#include <stdio.h>

float exponencial(int x, int y);

main()
{
    char bits[256], x[256];
    int escolha, n, i, decimal, quociente, z, resto;

    printf("Escolha uma opcao:\n");
    printf("1. Binario para Decimal\n");
    printf("2. Binario para Hexadecimal\n");
    printf("3. Hexadecimal para Decimal\n");
    printf("4. Hexadecimal para Binario\n");
    printf("5. Decimal para Binario\n");
    printf("6. Decimal para Hexadecimal\n");
    printf("7. Octal para Decimal\n");
    printf("8. Decimal para Octal\n");
    scanf("%d", &escolha);
    getchar();

    printf("Digite o valor na base de origem: ");
    scanf("%s", bits);
    getchar();

    n = 0;
    i = 0;
    decimal = 0;
    for(i = 0; bits[i] != '\0'; i++);
    n = i - 1;

    switch(escolha)
    {
    case 1:
    case 2:
        for(i = 0; i <= n; i++)
        {
            if(bits[i] == '1')
            {
                decimal += exponencial(2, n-i);
            }
        }
        break;
    case 3:
    case 4:
        for(i = 0; i <= n; i++)
        {
            switch(bits[i])
            {
            case '1':
                decimal += exponencial(16, n-i);
                break;
            case '2':
                decimal += 2*exponencial(16, n-i);
                break;
            case '3':
                decimal += 3*exponencial(16, n-i);
                break;
            case '4':
                decimal += 4*exponencial(16, n-i);
                break;
            case '5':
                decimal += 5*exponencial(16, n-i);
                break;
            case '6':
                decimal += 6*exponencial(16, n-i);
                break;
            case '7':
                decimal += 7*exponencial(16, n-i);
                break;
            case '8':
                decimal += 8*exponencial(16, n-i);
                break;
            case '9':
                decimal += 9*exponencial(16, n-i);
                break;
            case 'A':
                decimal += 10*exponencial(16, n-i);
                break;
            case 'B':
                decimal += 11*exponencial(16, n-i);
                break;
            case 'C':
                decimal += 12*exponencial(16, n-i);
                break;
            case 'D':
                decimal += 13*exponencial(16, n-i);
                break;
            case 'E':
                decimal += 14*exponencial(16, n-i);
                break;
            case 'F':
                decimal += 15*exponencial(16, n-i);
                break;
            default:
                break;
            }
        }
        break;
    case 5:
    case 6:
    case 8:
        for(i = 0; i <= n; i++)
        {
            switch(bits[i])
            {
            case '1':
                decimal += exponencial(10, n-i);
                break;
            case '2':
                decimal += 2*exponencial(10, n-i);
                break;
            case '3':
                decimal += 3*exponencial(10, n-i);
                break;
            case '4':
                decimal += 4*exponencial(10, n-i);
                break;
            case '5':
                decimal += 5*exponencial(10, n-i);
                break;
            case '6':
                decimal += 6*exponencial(10, n-i);
                break;
            case '7':
                decimal += 7*exponencial(10, n-i);
                break;
            case '8':
                decimal += 8*exponencial(10, n-i);
                break;
            case '9':
                decimal += 9*exponencial(10, n-i);
                break;
            default:
                break;
            }
        }
        break;
    case 7:
        for(i = 0; i <= n; i++)
        {
            switch(bits[i])
            {
            case '1':
                decimal += exponencial(8, n-i);
                break;
            case '2':
                decimal += 2*exponencial(8, n-i);
                break;
            case '3':
                decimal += 3*exponencial(8, n-i);
                break;
            case '4':
                decimal += 4*exponencial(8, n-i);
                break;
            case '5':
                decimal += 5*exponencial(8, n-i);
                break;
            case '6':
                decimal += 6*exponencial(8, n-i);
                break;
            case '7':
                decimal += 7*exponencial(8, n-i);
                break;
            default:
                break;
            }
        }
        break;
    default:
        break;
    }

    z = 0;

    switch(escolha)
    {
    case 1:
    case 3:
    case 7:
        quociente = decimal;
        do
        {
            z++;
            quociente = quociente/10;
        }
        while(quociente >= 10);

        for(i = 0; i <=z; i++)
        {
            quociente = decimal/exponencial(10,z-i);
            decimal = decimal%(int)exponencial(10, z-i);

            switch(quociente)
            {
            case 0:
                x[i] = '0';
                break;
            case 1:
                x[i] = '1';
                break;
            case 2:
                x[i] = '2';
                break;
            case 3:
                x[i] = '3';
                break;
            case 4:
                x[i] = '4';
                break;
            case 5:
                x[i] = '5';
                break;
            case 6:
                x[i] = '6';
                break;
            case 7:
                x[i] = '7';
                break;
            case 8:
                x[i] = '8';
                break;
            case 9:
                x[i] = '9';
                break;
            default:
                break;
            }
        }
        x[i] = '\0';
        break;
    case 2:
    case 6:
        quociente = decimal;
        do
        {
            z++;
            quociente = quociente/16;
        }
        while(quociente >= 16);

        for(i = 0; i <=z; i++)
        {
            quociente = decimal/exponencial(16,z-i);
            decimal = decimal%(int)exponencial(16, z-i);

            switch(quociente)
            {
            case 0:
                x[i] = '0';
                break;
            case 1:
                x[i] = '1';
                break;
            case 2:
                x[i] = '2';
                break;
            case 3:
                x[i] = '3';
                break;
            case 4:
                x[i] = '4';
                break;
            case 5:
                x[i] = '5';
                break;
            case 6:
                x[i] = '6';
                break;
            case 7:
                x[i] = '7';
                break;
            case 8:
                x[i] = '8';
                break;
            case 9:
                x[i] = '9';
                break;
            case 10:
                x[i] = 'A';
                break;
            case 11:
                x[i] = 'B';
                break;
            case 12:
                x[i] = 'C';
                break;
            case 13:
                x[i] = 'D';
                break;
            case 14:
                x[i] = 'E';
                break;
            case 15:
                x[i] = 'F';
                break;
            default:
                break;
            }
        }
        x[i] = '\0';
        break;
    case 4:
    case 5:
        quociente = decimal;
        do
        {
            z++;
            quociente = quociente/2;
        }
        while(quociente >= 2);

        for(i = 0; i <=z; i++)
        {
            quociente = decimal/exponencial(2,z-i);
            decimal = decimal%(int)exponencial(2, z-i);

            switch(quociente)
            {
            case 0:
                x[i] = '0';
                break;
            case 1:
                x[i] = '1';
                break;
            default:
                break;
            }
        }
        x[i] = '\0';
        break;
    case 8:
        quociente = decimal;
        do
        {
            z++;
            quociente = quociente/8;
        }
        while(quociente >= 8);

        for(i = 0; i <=z; i++)
        {
            quociente = decimal/exponencial(8,z-i);
            decimal = decimal%(int)exponencial(8, z-i);

            switch(quociente)
            {
            case 0:
                x[i] = '0';
                break;
            case 1:
                x[i] = '1';
                break;
            case 2:
                x[i] = '2';
                break;
            case 3:
                x[i] = '3';
                break;
            case 4:
                x[i] = '4';
                break;
            case 5:
                x[i] = '5';
                break;
            case 6:
                x[i] = '6';
                break;
            case 7:
                x[i] = '7';
                break;
            default:
                break;
            }
        }
        x[i] = '\0';
        break;
    default:
        break;
    }

    printf("Resposta = %s", x);
}

float exponencial(int x, int y)
{
    if(y == 0)
    {
        return 1;
    }

    int i;
    float r = (float)x;
    for(i = 1; i < y; i++)
    {
        r = (float)r*x;
    }
    return r;
}