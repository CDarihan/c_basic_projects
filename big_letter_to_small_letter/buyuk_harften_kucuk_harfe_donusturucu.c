#include <stdio.h>

int main(int argc, char const *argv[])
{
    char str[6];

    printf("En fazla 5 karakterlik tamamiyle büyük harften oluşan bir kelime girin: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++){

        printf("%c", str[i] + 32);
    }

    getchar(); 
    getchar(); 

    return 0;
}