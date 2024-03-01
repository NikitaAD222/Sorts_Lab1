#include <iostream>
#include <vector>
#include <random>

template <typename T>
void selectionSort(std::vector<T>& arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        if (minIndex != i)
            std::swap(arr[i], arr[minIndex]);
    }
}


template <typename T>
void printArray(const std::vector<T>& arr) {
    for (const T& element : arr) {
        std::cout << element << " ";
    }
    
    std::cout << std::endl;
}

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    std::vector<double> arr(size);

    std::cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++)
        std::cin >> arr[i];

    selectionSort(arr, size);

    std::cout << "Sorted array: ";
    printArray(arr);

    return 0;
}