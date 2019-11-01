#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, D, x1, x2;
    printf("a = "); scanf("%d" ,&a);
    printf("b = "); scanf("%d" ,&b);
    printf("c = "); scanf("%d" ,&c);
    if(a>0){
        D = (b*b)-(4*a*c);
        printf("D = %d\n", D);
        if(D>=0){
            x1 = (-b + (sqrt(D)))/(2*a);
            x2 = (-b + (sqrt(D)))/(2*a);
            printf("x1 : %d\n", x1);
            printf("x2 : %d\n", x2);
        }else{
         printf("Akar Imajiner");
    }
    return 0;
    }
    }
