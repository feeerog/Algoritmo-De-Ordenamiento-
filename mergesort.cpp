#include <iostream>
using namespace std;

// Función para fusionar dos mitades
void merge(int arr[], int left, int middle, int right) {
    int n1 = middle - left + 1;  // Tamaño de la primera mitad
    int n2 = right - middle;     // Tamaño de la segunda mitad

    // Crear arreglos temporales
    int* L = new int[n1];
    int* R = new int[n2];

    // Copiar datos a los arreglos temporales
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[middle + 1 + j];

    // Fusionar los arreglos temporales de vuelta en el arreglo original
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copiar los elementos restantes de L[], si hay alguno
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copiar los elementos restantes de R[], si hay alguno
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    // Liberar la memoria dinámica
    delete[] L;
    delete[] R;
}

// Función Merge Sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;  // Encuentra el punto medio
        mergeSort(arr, left, middle);            // Ordenar la primera mitad
        mergeSort(arr, middle + 1, right);       // Ordenar la segunda mitad
        merge(arr, left, middle, right);         // Fusionar ambas mitades
    }
}


