#include <stdio.h>
 
int main() {
 
    int dt,mn,yr;
    scanf("%d/%d/%d",&dt,&mn,&yr);
    
    printf("%02d/%02d/%02d\n",mn,dt,yr);
    printf("%02d/%02d/%02d\n",yr,mn,dt);
    printf("%02d-%02d-%02d\n",dt,mn,yr);
 
    return 0;
}