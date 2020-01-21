// 6_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//void printArray(int array[])
void printArray(int *array)
{
    std::cout << sizeof(array) << std::endl;
    std::cout << *array << std::endl;

    *array = 100;
}

struct S07
{
    int arr[5] = { 9, 7, 5, 3, 1 };
};

void printArray(struct S07* s1)
{
    std::cout << sizeof(s1->arr) << std::endl;
}
int main()
{
    using namespace std;

    int array[] = { 9, 7, 5, 3, 1 };

    cout << sizeof(array) << endl;

    int* ptr = array;

    cout << sizeof(ptr) << endl;

    printArray(array);

    cout << array[0] << " " << *array << endl;

    cout << *ptr << " " << *(ptr + 1) << endl;

    struct S07 s1 {1,2,3,4,5};

    printArray(&s1);
    /*cout << array << endl;
    cout << &array[0] << endl;
    cout << *array << endl;
    
    int* ptr = array;
    cout << ptr << endl;
    cout << *ptr << endl;*/
    
    /*char name[] = "leehyerim";
    cout << *name << endl;*/

    return 0;
}

