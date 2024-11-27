#include <stdio.h>
int main() {
    int num[5] = {2,3,1,3,4};
    int be =  0, lon;
    for(int i = 0; i < 5; i++){
     if(num[be] > num[i]){
      be = num[i];
     }else{
         lon = num[i];
    }
    }
  printf("số bé nhất là: %d\n", be);
  printf("số lớn nhất là: %d", lon);

    return 0;
}
