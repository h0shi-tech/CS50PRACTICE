#include <stdio.h> # Программа, которая проверяет является ли число четным или нечетным

int main() {
    int num;
    
    printf("Введите число: ");
    scanf("%d", &num);
    
    if(num % 2 == 0) {
        printf("%d - четное число\n", num);
    } else {
        printf("%d - нечетное число\n", num);
    }
    
    return 0;
}
