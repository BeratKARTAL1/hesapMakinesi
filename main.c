#include <stdio.h>
void menu();
int toplama(int x,int y);
int cikarma(int x,int y);
int carpma(int x,int y);
float bolme(float a,float b);
int x,y;
float a,b;
int main() {
    menu();
    int secim;
    printf("lutfen bir 1-4 arasi secim yapiniz:\n");
    scanf("%d",&secim);
    switch (secim) {
        case 1:
            printf("lutfen iki sayi giriniz:\n");
            scanf("%d %d",&x,&y);
            printf("SONUC:%d\n",toplama(x,y));break;
        case 2:
            printf("lutfen iki sayi giriniz:\n");
            scanf("%d %d",&x,&y);
            printf("SONUC:%d\n",cikarma(x,y));break;
        case 3:
            printf("lutfen iki sayi giriniz:\n");
            scanf("%f %f",&a,&b);
            bolme(a,b);
            if (b!=0)
                printf("SONUC:%.2f\n",bolme(a,b));break;
        case 4:
            printf("lutfen iki sayi giriniz:\n");
            scanf("%d %d",&x,&y);
            printf("SONUC:%d\n",carpma(x,y));break;
        default:
            printf("ERROR");break;
    }
    return 0;
}
void menu() {
    printf("1-TOPLAMA\n2-CIKARMA\n3-BOLME\n4-CARPMA\n");
}
int toplama(int x,int y) {
    return x+y;
}
int cikarma (int x, int y) {
    return x-y;
}
float bolme (float a,float b) {
    if (b==0) {
        printf("tanimsiz\n");
    }else
        return a/b;
}
int carpma (int x,int y) {
    return x*y;
}