#include<stdio.h>
int main()
{
    double A,B,C;

    double a[3],b[3];
    scanf("%lf %lf %lf",&a[0],&a[1],&a[2]);
    if(a[0]>a[1] && a[0]>a[2]){
        b[2]=a[0];
        if(a[1]>a[2]){
            b[1]=a[1];
            b[0]=a[2];
        }
        else{
            b[1]=a[2];
            b[0]=a[1];
        }

    }
    else if(a[1]>a[0] && a[1]>a[2]){
        b[2]=a[1];
        if(a[0]>a[2]){
            b[1]=a[0];
            b[0]=a[2];
        }
        else{
            b[1]=a[2];
            b[0]=a[0];
        }

    }
    else if(a[2]>a[0] && a[2]>a[1]){
        b[2]=a[2];
        if(a[0]>a[1]){
            b[1]=a[0];
            b[0]=a[1];
        }
        else{
            b[1]=a[1];
            b[0]=a[0];
        }
    }
    else if(a[0]==a[1] && a[0]==a[2] && a[1]==a[2]){
        b[0]=a[0];
        b[1]=a[0];
        b[2]=a[0];
    }
    else if(a[0]==a[1] && a[1]!=a[2] && a[0]!=a[2]){
        b[2]=a[0];
        b[1]=a[0];
        b[0]=a[2];
    }
    else if(a[2]==a[1] && a[1]!=a[0] && a[0]!=a[2]){
        b[2]=a[2];
        b[1]=a[2];
        b[0]=a[0];
    }
    else if(a[0]==a[2] && a[1]!=a[2] && a[0]!=a[1]){
        b[2]=a[2];
        b[1]=a[2];
        b[0]=a[1];
    }

    A = b[2];
    B = b[1];
    C = b[0];


    if(A*A == B*B + C*C){
            if(A >= B + C || B>= A+C || C>=A+B){
        printf("NAO FORMA TRIANGULO\n");
    }
        else{
        printf("TRIANGULO RETANGULO\n");
        }
    }
    else{

    }
    if(A*A > B*B + C*C){
            if(A >= B + C || B>= A+C || C>=A+B){
        printf("NAO FORMA TRIANGULO\n");
    }
        else{
                printf("TRIANGULO OBTUSANGULO\n");
        }
    }
    else{

    }
    if(A*A < B*B + C*C){
            if(A >= B + C || B>= A+C || C>=A+B){
        printf("NAO FORMA TRIANGULO\n");
    }
        else{
                printf("TRIANGULO ACUTANGULO\n");
        }
    }
    else{

    }
    if(A==B && B==C && C==A){
            if(A >= B + C || B>= A+C || C>=A+B){
        printf("NAO FORMA TRIANGULO\n");
    }
        else{
                printf("TRIANGULO EQUILATERO\n");
        }
    }
    else{

    }


    if(A==B && A!=C && B!=C){
            if(A >= B + C || B>= A+C || C>=A+B){
        printf("NAO FORMA TRIANGULO\n");
    }
        else{
                printf("TRIANGULO ISOSCELES\n");
        }
    }
    else{

    }
    if(A==C && B!=A && B!=C){
            if(A >= B + C || B>= A+C || C>=A+B){
        printf("NAO FORMA TRIANGULO\n");
    }
        else{
                printf("TRIANGULO ISOSCELES\n");
        }
    }
    else{

    }
    if(B==C && B!=A && C!=A){
            if(A >= B + C || B>= A+C || C>=A+B){
        printf("NAO FORMA TRIANGULO\n");
    }
        else{
                printf("TRIANGULO ISOSCELES\n");
        }
    }
    else{

    }
    return 0;
}
