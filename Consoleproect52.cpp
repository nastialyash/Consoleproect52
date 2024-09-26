

#include <iostream>

using namespace std;
void copy(int* num, int* num2, int size) {

    for (int i = 0; i < size; ++i) {
        *(num2 + i) = *(num + i);
    }
}
void reverse(int* arr, int size) {
    int* start = arr;
    int* end = arr + size - 1;


    while (start < end) {

        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
int main() {
    const int SIZE = 5;
    int a[SIZE] = { 1,4,15,67,12 };
    int b[SIZE];

    copy(a, b, SIZE);
    cout << "Copied : ";
    for (int i = 0; i < SIZE; ++i) {
        cout << b[i] << " ";
    }
    cout << endl;




    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before : ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverse(arr, size);
    cout << "After : ";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
    }
    cout << endl;

}


