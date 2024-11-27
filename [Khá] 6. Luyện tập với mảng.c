#include <stdio.h>
int main() {
    int num[5] = {1,2,3,4,5};
    int be =  0, lon;
    for(int i = 0; i < 5; i++){
     if(num[i] % 2 == 0){
      printf("%d ", num[i] + 3);
     }else{
    printf("%d ", num[i] + 2);
    }
    }
    return 0;
}
