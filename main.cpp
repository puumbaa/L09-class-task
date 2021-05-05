#include <iostream>

bool binary_search(int key, int *arr, int size) {
    if (size <= 0) return false;

    int middle = size / 2;
    if (key > arr[middle])      return binary_search(key, arr + middle + 1, size - middle - 1);
    else if (key < arr[middle]) return binary_search(key, arr, middle);

    return true;
}


int main(int argc, char **argv) {
    int arr[] = {1, 3, 5, 6, 8, 10, 12, 21};
    std::cout << binary_search(6, arr, 8);
    return 0;
}