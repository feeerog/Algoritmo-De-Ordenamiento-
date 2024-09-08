#include <iostream>
using namespace std;

// Función de Insertion Sort
// Ordena un arreglo de tamaño 'n' usando el algoritmo de Insertion Sort
void insertionSort(int arr[], int n) {
    // Iterar a través de los elementos del arreglo desde el segundo hasta el último
    for (int i = 1; i < n; i++) {
        int key = arr[i];  // Guardar el elemento actual (clave)
        int j = i - 1;

        // Mover los elementos que son mayores que la clave una posición hacia adelante
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];  // Desplazar el elemento hacia la derecha
            j = j - 1;  // Continuar con el siguiente elemento a la izquierda
        }
        arr[j + 1] = key;  // Insertar la clave en su posición correcta
    }
}
