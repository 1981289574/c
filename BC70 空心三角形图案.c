#include <stdio.h>

int main() {
    int n;
    
    while (1 == scanf("%d", &n)) {
        char a[n][n];
        memset(a, ' ', n * n * sizeof(char));
        
        for (int i = 0; i < n; ++i) {
            a[i][0] = '*';
            
            a[n-1][i] = '*';
            
            a[i][i] = '*';
        }
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                printf("%c ", a[i][j]);
            }
            printf("\n");
        }
    }
    
    return 0;
}
