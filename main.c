#include <stdio.h>
void menu();
int collection(int x,int y);
int extraction(int x,int y);
int impact(int x,int y);
float divide(float a,float b);
int x,y;
float a,b;
int main() {
    menu();
    int choose;
    printf("Please enter a number between 1 and 4.:\n");
    scanf("%d",&choose);
    switch (choose) {
        case 1:
            printf("please enter two numbers:\n");
            scanf("%d %d",&x,&y);
            printf("conclusion:%d\n",collection(x,y));break;
        case 2:
            printf("please enter two numbers:\n");
            scanf("%d %d",&x,&y);
            printf("conclusion:%d\n",extraction(x,y));break;
        case 3:
            printf("please enter two numbers:\n");
            scanf("%f %f",&a,&b);
            divide(a,b);
            if (b!=0)
                printf("conclusion:%.2f\n",divide(a,b));break;
        case 4:
            printf("please enter two numbers:\n");
            scanf("%d %d",&x,&y);
            printf("conclusion:%d\n",impact(x,y));break;
        default:
            printf("ERROR");break;
    }
    return 0;
}
void menu() {
    printf("1-collection\n2-extraction\n3-divide\n4-impact\n");
}
int collection(int x,int y) {
    return x+y;
}
int extraction (int x, int y) {
    return x-y;
}
float divide (float a,float b) {
    if (b==0) {
        printf("tanimsiz\n");
    }else
        return a/b;
}
int impact (int x,int y) {
    return x*y;
}
