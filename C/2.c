#include <stdio.h> #Программа, которая выводит таблицу умножения на 5 с использованием вложенных циклов

int main() {
    int num = 5;
    
    for(int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num*i);
    }
    
    return 0;
}
