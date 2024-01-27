#include <stdio.h>

// Program no 1
int main(void)
{
    int i, x;
    int fx = 0;
    printf("Masukkan nilai x = "); scanf("%i", &x); //memasukkan nilai x
    for (i = 0; i < x; i++) // repetition
    {
        fx += (i*2) + fx;
    }
    printf("nilai f(x) = %i\n", fx);
    return 0;
}

// program no 2 
/* merupakan program untuk melakukan validasi angka dari inputan pengguna */
void main(void)
{
    int number; 
    int trials = 0;
    printf("Masukkan angka: "); scanf("%i", &number);

    while (number < 0)
    {
        printf("Angka harus lebih besar dari 0\n");
        scanf("%i", &number);
        trials++;
    }
    printf("angka tidak valid: %i\n", trials);
}

// percobaan no 3
/* program menebak angka, akan mengulang 3 kali dan print hasil akhir */
int main(void)
{   
    const int angkaRahasia = 10;
    int tebakan;
    for (int i = 0; i < 3; i++)
    {
        printf("tebakan ke-%i: "); scanf("%i", &tebakan);
        scanf("%i", &tebakan);

        if (tebakan == angkaRahasia)
        {
            printf("Anda Menang\n");
            return 0;
        }
    }
    printf("Anda Kalah\n");
    return 0;
}

// percobaan no 4 & 7
int main(void)
{
    int x, a = 1;
    printf("Masukkan faktorial: "); scanf("%i", &x);
    for (int i = 1; i <= x; i++) /* menggunakan for menaik */
    {
        a *= i;
    }

    for (int i = 1; i <= x; x++) /* menggunakan for menurun */
    {
        a *= x;
    }
    printf("nilai faktorial: % i\n", a);
    return 0;
}

// percobaan no 5
/* membuat segitiga */
int main(void)
{
    char simbol;
    int x;
    printf("Masukkan simbol: "); scanf("%c", &simbol);
    printf("Masukkan tinggi: "); scanf("%i", &x);
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", simbol);
        }
        printf("\n");
    }
    return 0;
}

// percobaan no 6
int main(void)
{
    int n, bil, total = 0;
    printf("Masukkan angka: "); scanf("%i", &n);
    if (n < 0)
    {
        printf("Masukkan bilangan bulat positif\n");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            bil = 2 * i - 1;
            total += bil;
        }
    }
    printf("total: %i\n", total);
}

// percobaan 8 segitiga miring
int main(void)
{
    char simbol; 
    int x, i, j;
    printf("Masukkan simbol: "); scanf("%c", &simbol);
    printf("Masukkan tinggi: "); scanf("%i", &x);
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", simbol);
        }
        printf("\n");
    }
    for (int i = x; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", simbol);
        }
        printf("\n");
    }    
}