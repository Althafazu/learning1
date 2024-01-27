#include "filepros.h"

int main (void)
{
    int i;
    printf("1. Create Barang\n"
            "2. Read Barang\n"
            "3. Update Barang\n"
            "4. Delete Barang\n");
    scanf("%i", &i);
    switch (i)
    {
    case 1:
        create_barang();
        break;
    case 2:
        read_barang();
        break;
    case 3:
        update_barang();
        break;
    case 4:
        delete_barang();
        break;
    default:
        printf("Usage: input (1-4) only\n");
        break;
    }
    return 0;
}