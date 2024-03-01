#include <stdio.h> #Программа, которая вычисляет факториал числа с использованием цикла Do while

int main() {
    int num, factorial = 1, i = 1;
    
    printf("Введите число: ");
    scanf("%d", &num);
    
    do {
        factorial *= i;
        i++;
    } while(i <= num);
    
    printf("Факториал числа %d = %d\n", num, factorial);
    
    return 0;
}
