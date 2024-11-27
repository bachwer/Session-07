// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int rows, cols;
    printf("Mời nhập số cột dọc: ");
    scanf("%d", &cols);
    printf("Mời nhập số cột ngang: ");
    scanf("%d", &rows);
    
    int num1[cols][rows];
    printf("mời nhập các phần tử trong mảng\n" );
      
    for(int k = 0; k < cols; k++ ){
    for(int y = 0; y < rows; y++){
        printf(" [ %d ] [ %d ] :", y + 1, k + 1);
        scanf("%d", &num1[y][k]);
    }
    }
    for(int k = 0; k < cols; k++ ){
    for(int y = 0; y < rows; y++){
        printf("%d   ", num1[y][k]);
    }
         printf("\n");
    }
    
    
    return 0;
}
