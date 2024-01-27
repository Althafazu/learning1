#include <stdio.h>
#include <stdlib.h>

// procedur declaration
void program_no_1 (void);
void program_no_2 (void);
void program_no_3 (void);
void program_no_4 (void);
void program_no_5 (void);
void program_no_6 (void);
void program_no_7 (void);
void program_no_8 (void);

// main program
int main(int argc, char const *argv[])
{
    int selection = atoi(argv[1]); 
    switch (selection)
    {
    case 1:
        program_no_1();
        break;
    case 2:
        program_no_2();
        break;
    case 3:
        program_no_3();
        break;
    case 4:
        program_no_4();
        break;
    case 5:
        program_no_5();
        break;
    case 6:
        program_no_6();
        break;
    case 7:
        program_no_7();
        break;
    case 8:
        program_no_8();
        break;
    default:
        printf("Usage: ./repetition number\nExample: ./repetition 1\n");
        break;
    }
    return 0;
}

// Program no 1
void program_no_1 (void)
{
    int i, x;
    int fx = 0;
    printf("Masukkan nilai x = "); scanf("%i", &x); //memasukkan nilai x
    for (i = 0; i < x; i++) // repetition
    {
        fx += (i*2) + fx;
    }
    printf("nilai f(x) = %i\n", fx);
}

// program no 2 
/* merupakan program untuk melakukan validasi angka dari inputan pengguna */
void program_no_2 (void)
{
    int number; 
    int trials = 0;
    printf("Masukkan angka:\n "); scanf("%i", &number);

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
void program_no_3 (void)
{   
    const int angkaRahasia = 10;
    int tebakan, i = 0;
    do
    {
        printf("tebakan ke-%i: ", i+1); scanf("%i", &tebakan);
        i++;
    }
    while (tebakan != angkaRahasia && i < 3);
    
    if (tebakan == angkaRahasia && i < 3)
    {
        printf("Anda Menang\n");
    }
    else
    {
        printf("Anda Kalah\n");
    }
}

// percobaan no 4 | for increment
void program_no_4 (void)
{
    int x, a = 1;
    printf("Masukkan faktorial: "); scanf("%i", &x);
    for (int i = 1; i <= x; i++) /* menggunakan for menaik */
    {
        a *= i;
    }
}

// percobaan no 5
/* membuat segitiga */
void program_no_5 (void)
{
    char simbol;
    int x;
    printf("Masukkan simbol: "); scanf("%c", &simbol);
    printf("Masukkan tinggi: "); scanf("%i", &x);
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", simbol);
        }
        printf("\n");
    }
}

// percobaan no 6 
void program_no_6 (void)
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

// program no 7 | menggunakan for menurun
void program_no_7 (void) 
{
    int x, a = 1;
    printf("Masukkan faktorial: "); scanf("%i", &x);
    for (int i = 1; i <= x; x++) /* menggunakan for menurun */
    {
        a *= x;
    }
    printf("nilai faktorial: % i\n", a);
}

// percobaan 8 segitiga miring
void program_no_8 (void)
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