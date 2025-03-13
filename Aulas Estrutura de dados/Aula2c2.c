#include <stdio.h>

int m = 5;
void funcao(int a){
    static int b = 0;
    printf("a = %d\n", a);
    printf("m = %d\n", m);
    printf("b = %d\n", b);
    a++;    
    m++;
    b++;
}

int main(){
    int n = 10;
    
    funcao(n);
    funcao(n);
    return 0;
}
