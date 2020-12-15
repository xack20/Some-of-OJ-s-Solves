#include<stdio.h>
int main()
{
    int i_h,i_m,f_h,f_m,f_t_h,f_t_m;
    scanf("%d %d %d %d",&i_h,&i_m,&f_h,&f_m);
    if (f_m<i_m){
        f_m=f_m+60;
        f_h=f_h-1;
        if(f_h>i_h){
            f_t_h=f_h-i_h;
            f_t_m=f_m-i_m;
        }
        else if(f_h<i_h){
            f_h=f_h+24;
            f_t_h=f_h-i_h;
            f_t_m=f_m-i_m;

        }
        else if(f_h==i_h){
            f_t_h=0;
            f_t_m=f_m-i_m;
        }
    }
    else if(f_m>i_m){
        if(f_h>i_h){
            f_t_h=f_h-i_h;
            f_t_m=f_m-i_m;
        }
        else if(f_h<i_h){
            f_h=f_h+24;
            f_t_h=f_h-i_h;
            f_t_m=f_m-i_m;
        }
        else if(f_h==i_h){
            f_t_h=0;
            f_t_m=f_m-i_m;
        }
    }
    else if(f_m==i_m){
        if(f_h>i_h){
            f_t_h=f_h-i_h;
            f_t_m=0;
        }
        else if(f_h<i_h){
            f_h=f_h+24;
            f_t_h=f_h-i_h;
            f_t_m=0;
        }
        else if(f_h==i_h){
            f_t_h=24;
            f_t_m=0;
        }
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",f_t_h,f_t_m);
    return 0;
}
