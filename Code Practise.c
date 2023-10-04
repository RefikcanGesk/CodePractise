#include <stdio.h>

int sayi;
int temp;
int ikilik[100];

int main()
{

    printf("Bir ondalik sayi giriniz: ");
    scanf("%d", sayi);

    temp = sayi;
    while(temp != 0){
        ikilik[i] = temp % 2;
        temp = temp / 2;
        i++
    }

    printf("%d sayisinin ikilik sayi sisteminde karsiligi: ", sayi);
    for(int j = i-1 ; j>0 ; j--)
        printf("%d",ikilik[j]);



}