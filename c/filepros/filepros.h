#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

typedef struct 
{
    int id_barang;
    char nama_barang[50];
    double harga_barang;
    int stok_barang;
}
list_barang; list_barang barang;

FILE *data_barang;
FILE *data_barang_temp;

void create_barang(void)
{
    data_barang = fopen("DataBarang.dat","ab+");
    printf("Masukkan id barang : "); scanf("%d",&barang.id_barang);
    while (barang.id_barang!= 0)
    {
        printf("Masukkan nama barang : "); scanf("%s",&barang.nama_barang);
        printf("Masukkan harga barang : "); scanf("%lf",&barang.harga_barang);
        printf("Masukkan stok barang : "); scanf("%d",&barang.stok_barang);
        fwrite(&barang,sizeof(barang),1,data_barang);
        printf("Masukkan id barang : "); scanf("%d",&barang.id_barang);
    }
    fclose(data_barang);
}

void read_barang(void)
{
    data_barang = fopen("DataBarang.dat","rb");
    while (fread(&barang,sizeof(barang),1,data_barang) == 1)
    {
        printf("|%-5d |%-5s |%-5.2lf |%-5d\n",barang.id_barang,barang.nama_barang,barang.harga_barang,barang.stok_barang);
    }
    fclose(data_barang);
}

void copy_barang(void)
{
    data_barang_temp = fopen("DataBarang_temp.dat", "rb");
    data_barang = fopen("DataBarang.dat", "wb");
    while (fread(&barang, sizeof(barang), 1, data_barang_temp)==1){
        fwrite(&barang, sizeof(barang), 1, data_barang);
    }
    fclose(data_barang);
    fclose(data_barang_temp);
}

void update_barang(void)
{
    bool found = false;
    int id;
    printf("masukkan id yang akan diedit:"); scanf("%i", &id);
    data_barang = fopen("DataBarang.dat", "rb");
    data_barang_temp = fopen("DataBarang_temp.dat", "wb");
    while(found == false && fread(&barang, sizeof(barang), 1, data_barang)==1)
    {
        if(barang.id_barang == id){
            found = true;
        } else {
            fwrite(&barang, sizeof(barang), 1, data_barang_temp);
        }
    }
    if (found == true)
    {
        printf ("|%-5i| |%-5s| |%-5.2lf| |%-5i|\n", barang.id_barang, barang.nama_barang, barang.harga_barang, barang.stok_barang);
        printf("i", &barang.id_barang);
        printf("Nama barang:"); scanf("%s", &barang.nama_barang);
        printf("Harga Barang: "); scanf("%lf", &barang.harga_barang);
        printf("Stok Barang:"); scanf("%i", &barang.stok_barang);
        fwrite(&barang, sizeof(barang), 1, data_barang_temp);
        while(fread(&barang, sizeof(barang), 1, data_barang))
        {
            fwrite(&barang, sizeof(barang), 1, data_barang_temp);
        }
    }
    else
    {
        printf("ID tidak ditemukan");
    }
    fclose(data_barang);
    fclose(data_barang_temp);
    copydata();
}

void delete_barang(void)
{
    bool found = false;
    int id;
    printf("Masukkan id yang akan dihapus: "); scanf("%i", &id);
    data_barang = fopen("DataBarang.dat", "rb");
    data_barang_temp = fopen("DataBarang_temp.dat", "wb");
    while(found == false && fread(&barang, sizeof(barang), 1, data_barang)==1)
    {
        if (barang.id_barang == id)
        {
            found = true;
        }
        else
        {
            fwrite (&barang, sizeof(barang), 1, data_barang_temp);
        }
    }
    if (found == true)
    {
        printf ("|%-5i| |%-5s| |%-5.2lf| |%-5i|\n", barang.id_barang, barang.nama_barang, barang.harga_barang, barang.stok_barang);
        while(fread(&barang, sizeof(barang), 1, data_barang))
        {
            fwrite(&barang, sizeof(barang), 1, data_barang_temp);
        }
    } 
    else
    {
        printf("ID tidak ditemukan\n");
    }
    fclose(data_barang);
    fclose(data_barang_temp);
    copy_barang();
}