#include <stdio.h>
int main() {
    int num[5] = {3,5,1,7,4};
    int be = 0;
    int lon;
    for(int i = 0; i < 5; i++){
        
     if(num[be] > num[i]){
      be = i;
     }else if(num[lon] < num[i]){
         lon = i;
    }
    }
  printf("số bé nhất là: %d\n", num[be]);
  printf("số lớn nhất là: %d",  num[lon]);

    return 0;
}
