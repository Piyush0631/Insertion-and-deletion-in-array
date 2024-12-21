#include <iostream>
using namespace std;

void insertElement(int arr[], int &size, int element, int position) {
    

    for (int i = size; i > position; --i) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    size++;
}

void deleteElement(int arr[], int &size, int position) {
   

    for (int i = position; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    size--;
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
  
    int arr[5]={10,20,30,40,50};
    int size =5;

    int element, position;

    // Insertion
    cout << "Enter the element to insert: ";
    cin >> element;
    cout << "Enter the position to insert the element : ";
    cin >> position;
    insertElement(arr, size, element, position);

    cout << "Array after insertion: ";
    displayArray(arr, size);

    // Deletion
    cout << "Enter the position of the element to delete : ";
    cin >> position;
    deleteElement(arr, size, position);

    cout << "Array after deletion: ";
    displayArray(arr, size);

    return 0;
}
