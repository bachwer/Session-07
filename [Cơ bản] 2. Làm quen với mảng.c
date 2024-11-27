#include <stdio.h>
int main() {
    int num[5];
    
    for(int i = 1; i <=5; i++){
        printf("Enter your number: ");
        scanf("%d", &num[i]);
    }
    
    for(int i = 1; i <=5; i++){
      printf("%d ",num[i]);
    }
      
  
    return 0;
}
