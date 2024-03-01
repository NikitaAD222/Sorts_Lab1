#include <iostream>
#include <vector>


template<typename T>
void bubbleSort(T array[], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                T t = array[j];
                array[j] = array[j + 1];
                array[j + 1] = t;
            }
        }
    }
}


template<typename T>
void printMassiv(T array[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << "  " << array[i];
    }
    std::cout << "\n";
}


int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    std::vector<double> array(size);
    std::cout << "Enter the array elements: ";
    
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }

    bubbleSort(array.data(), size);

    std::cout << "Sorted array:\n";
    printMassiv(array.data(), size);

    return 0;
}