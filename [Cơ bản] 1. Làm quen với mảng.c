#include <stdio.h>
int main() {
    int month[12];
    
    for(int i = 1; i <= 12; i++){
        month[i] = i;
        printf("%d\n", month[i]);
    }
        printf("do dai cua mang la: %d", sizeof(month) / sizeof(int));
  
    return 0;
}



