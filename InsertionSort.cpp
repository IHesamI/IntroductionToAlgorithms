#include <iostream>
void insertionSort(int array[], int length)
{
    for (int i = 2; i < length; i++)
    {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j-1;
        }
        array[j + 1] = key;
    }
    // return array;
    }
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
int main()
{

    int arr[] = {1, 2, 3, 7, 5, 9, 10, 13, 0};
    insertionSort(arr,9);
    printArray(arr,8);
    return 0;
}

