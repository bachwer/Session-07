#include <stdio.h>
int main() {
   int i;
   printf("Enter your number of array: ");
   scanf("%d", &i);
   int num[i];
   for(int u = 0; u < i; u++){
       do{
        printf("Enter your number: ");
        scanf("%d", &num[u]);
        if(num[u] % 2 == 0){
            printf("Try again !!!\n");
        }
       }while(num[u] % 2 == 0);
   }
   
    return 0;
}
