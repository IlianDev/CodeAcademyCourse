/*
Функция, която въвежда елементите в масив от цели числа. Програмата
чете цяло число n и извиква функцията да прочете масив от n числа. Накрая
програмата извежда един от елементите на масива.

- Въвеждаме ел в масив от цели числа. Чете се едно цяло число n, 
и ние трябва да напишем фунцкич, която да чете и запълва масив от n числа

да си представим че имаме да четем масив от 5 числа, 4 числа и тн. За всеки един 
няма да пишем for(), защото не е удобно. Затова е по удобно да се напиш ф-ция. 

Func readArr() - зависи от броя ел, които трябва да прочете. И тя ще върне указател 
към int, т.е ще върне указател към областта където сме прочели масива. 

*/

#include<stdio.h>
#include<stdlib.h>

int* readArr(int n)
{
    int* result = malloc(n * sizeof(int)); // отделя се в heap област от паметта 
    // място за n пъти по sizeof(int), т.е толкова байта, колкото заема тип int. 

    // reading array
    printf("Type array here: \n");
    for (int i = 0; i < n; i ++) // 1 2 3 4 5 6 
    {
        printf("Element: arr[%d] -> ", i);
        scanf("%d", result + i);
    }
    return result;
}

int main()
{
    int* myArr;

    int n;
    printf("Enter number (n): \n");
    scanf("%d", &n);

    myArr = readArr(n); 
    printf("%d", myArr[3]); // 4
    // free(myArr);
}