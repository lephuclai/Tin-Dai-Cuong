#include<stdio.h>
int main(){
    int a,b,c;
    int tong;
    printf("Nhap a:"); scanf("%d", &a);
    printf("Nhap b:"); scanf("%d", &b);
    printf("Nhap c:"); scanf("%d", &c);
    tong=a+b+c;
    printf("%d", tong);
    printf("\n%f", tong/3.0);
    return 0;
}