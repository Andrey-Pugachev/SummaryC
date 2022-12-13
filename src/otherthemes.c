/*
 ТЕМЫ ДЛЯ ИЗУЧЕНИЯ ===================================================
 
 Решето Эратосфена -----------------------------
    Простые числа - это числа которые делятся только на себя и на единицу.
    решето Эратосфена просеивает все состовные числа и оставляет только простые.
 
 
 Треугольник Паскаля ---------------------------
 
 
 Алгоритм Эвклида ------------------------------
 
 
 Факториал -------------------------------------
 Факториалом числа называют произведение всех натуральных чисел от 1 до него включительно и обозначается ! (4! = 24)
 #include <stdio.h>
 int main() {
     for (int i = 1; i <= 10; i++) {
         int fak = 1;
         for (int j = 1; j <= i; j++)
             fak = fak * j;
         if (i != 10)
             printf("%d! = %8d\n", i, fak);
         else
             printf("%d!= %8d\n", i, fak);
     }
     return 0;
 }
 
 Последоватьельность Фибоначчи -----------------
 
 
 
 
 */

//#include <stdio.h>
//int main() {
//    puts("Insert a range of numbers:");
//    int rangeOfNumbers;
//    char c = ' ';
//    if (scanf("%d%c", &rangeOfNumbers, &c) == 2 && c == '\n') {
//        int arrOfNum[rangeOfNumbers];
//        for (int i = 0; i < rangeOfNumbers; i++)
//            printf("%3d", arrOfNum[i] = i + 1);
//        printf("\n");
//        for (int i = 0; i < rangeOfNumbers; i++) {
//            char flag = 1;
//            for (int j = 0; j < i; j++)
//                if (i != 1 && i != 2 && i !=3 && (i % ((j + 1) == 0) && j != 1))
//                    flag = 0;
//            printf("%3d", flag);
//        }
//    } else
//        puts("Wrong value inserted.");
//    return 0;
//}

