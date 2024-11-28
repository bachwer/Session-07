#include <stdio.h>

int main() {
   int i;
   printf("Enter your number: ");
   scanf("%d", &i);
   
   int u;
   int l = 1;
   int y = 1;
   int z = 0;
   int num[i];
 while(y <= i){
       u = 0;
     for(int k = 1; k <= l; k++){
       if(l % k == 0 ){
           u++;
       }
   }
   if(u == 2){
       num[z] = l;
        z++;
        y++;
   }
 l++;
}

for(int o = 0; o < i; o++){
    printf("%d\n", num[o]);
}
    return 0;
    
    
    
    
    
    
    
    
    
    
    
    
    
}
