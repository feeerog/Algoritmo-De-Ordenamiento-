#include <iostream>
using namespace std;

// Función para particionar el arreglo
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Elige el último elemento como pivote
    int i = (low - 1);      // Índice del elemento más pequeño

    // Mover todos los elementos menores que el pivote a la izquierda
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    // Coloca el pivote en su posición correcta
    swap(arr[i + 1], arr[high]);
    return (i + 1);  // Retorna el índice del pivote
}

// Función Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Encuentra la posición del pivote
        int pi = partition(arr, low, high);

        // Ordenar recursivamente las mitades
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
