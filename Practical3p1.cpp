#include <iostream>
using namespace std;


void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }

    cout << "Bubble Sort: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min])
                min = j;
        }
        swap(arr[i], arr[min]);
    }

    cout << "Selection Sort: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}


void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    cout << "Insertion Sort: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {50, 20, 40, 10, 30};
    int n = 5;

    int a[n], b[n], c[n];

    for (int i = 0; i < n; i++) {
        a[i] = b[i] = c[i] = arr[i];
    }

    bubbleSort(a, n);
    selectionSort(b, n);
    insertionSort(c, n);

    return 0;
}