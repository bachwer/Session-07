#include <stdio.h>
int main() {
   int i;
   int u;
   printf("Enter your number: ");
   scanf("%d", &i);
   int num[i];
   int y = 0;
   for(int k = 0; k < i; k++){
       printf("nhập số phần tử %d:  ", k + 1);
       scanf("%d", &num[k]);
   }
   while(y < i){
    u = 0;
    for(int k = 1; k <= num[y]; k++){
       if(num[y] % k == 0){
        u++;
       }
       }
       if(u == 2){
           printf("%d  ", num[y]);
       }
       y++;
   }
    return 0;
}
