#include <stdio.h>
int main() {
    int num[] = {2,3,1,3,4};
    
    for(int i = 0; i < 5; i++){
       if(num[i] % 2 == 0){
        printf("%d\n", num[i]);
       }else{
           printf("Mang ko chua so chan !!\n");
       }
    }
    
    return 0;
}
