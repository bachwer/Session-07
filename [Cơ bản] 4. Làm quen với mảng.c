#include <stdio.h>
int main() {
    int i;
    printf("Enter your number of array: ");
    scanf("%d", &i);
    int num[i] ;
    
    for(int y = 0; y < i; y++){
        printf("Enter your number: ");
        scanf("%d", &num[y]);
    }
    for(int z = 0; z < i; z++){
        printf("%d ", num[z]);
    }
    return 0;
}
