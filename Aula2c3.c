#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n = 10;
    
    int *p = malloc(n * sizeof(int));
    
    for(int i = 0; i < n; i++){
        p[i] = i;
    }
    
    p = realloc(p, 2 * n * sizeof(int));
    
    for(int i = 0; i < 2 * n; i++){
        printf("%d\n", p[i]);
    }
    
    free(p);
    
    return 0;
}
