#include <stdio.h>
int main() {
    
    for(int i=1; i<=6; i++) {
        for(int j=1; j<=5; j++) {
            if(i == 1 || i == 5 || j == 1 || j == 5 || (i == 4 && j == 4) || (i == 6 && j == 5)) { 
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
