/*
Сортирането чрез вмъкване е прост алгоритъм за сортиране за малък брой елементи.
В сортиране с вмъкване сравнявате ключовия елемент с предишните елементи.
Ако предишните елементи са по-големи от ключовия елемент,
тогава премествате предишния елемент на следващата позиция.
Започва се от индекс 1 докато се достигне размера на входния масив.
[ 8 3 5 1 4 2 ]
key = 3 //starting from 1st index.
Тук key ще бъде сравнен с предишните елементи. В този случай „ключът“ се сравнява с 8. тъй като 8 > 3,
преместваме елемент 8 до следващата позиция и вмъкваме key в предишната позиция.
Result: [ 3 8 5 1 4 2 ]
Key = 5 --> индекс 1
8 > 5 --> преместваме 8 на 2-ра позиция и вмъкваме 5 на 1-ва позиция.
Result: [ 3 5 8 1 4 2 ]
Key = 1 --> трети индекс
8 > 1 => [ 3 5 1 8 4 2 ]
5 > 1 => [ 3 1 5 8 4 2 ]
3 > 1 => [ 1 3 5 8 4 2 ]
Result: [ 1 3 5 8 4 2 ]
key = 4 --> четвърти индекс
8 > 4 => [ 1 3 5 4 8 2 ]
5 > 4 => [ 1 3 4 5 8 2 ]
3 > 4 ≠> stop
Result: [ 1 3 4 5 8 2 ]
*/

void insertionSort(int arr[], int n)
{
int i, key, j;
for (i = 1; i < n; i++)
{
    key = arr[i];
    j = i-1;
    while (j >= 0 && arr[j] > key)
    {
        arr[j+1] = arr[j];
        j = j-1;
    }
    arr[j+1] = key;
    }
}