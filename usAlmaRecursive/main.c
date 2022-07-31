#include <stdio.h>
#include <stdlib.h>

int usAl(int sayi,int us){

    if(us ==0){
        return 1;
    }
    return sayi*usAl(sayi,us-1);

}

int main(){

    int sayi,us;
    printf("Sayiyi ve ussunu giriniz: ");
    scanf("%d %d",&sayi,&us);
    printf("sonuc: %d",usAl(sayi,us));

    return 0;
}
