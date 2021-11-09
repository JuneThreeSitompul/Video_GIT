#include <iostream>
using namespace std;

void swap(int *z, int *w) {
  int t = *z;
  *z = *w;
  *w = t;
}

void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}
int partition(int array[], int rendah, int tinggi) {
    
  // Memilih urutan angka terakhir sebagai pivot
  int pivot = array[tinggi];
  
  int i = (rendah - 1);

  for (int x = rendah; x < tinggi; x++) {
    if (array[x] <= pivot) {
        
      i++;
      
      swap(&array[i], &array[x]);
    }
  }

  swap(&array[i + 1], &array[tinggi]);
  
  return (i + 1);
}

void quickSort(int array[], int rendah, int tinggi) {
  if (rendah < tinggi) {
      
    int pi = partition(array, rendah, tinggi);

    quickSort(array, rendah, pi - 1);
    quickSort(array, pi + 1, tinggi);
  }
}

int main() {
  int data[] = {100,98,96,99,97,90,95,91,94,93,92,81,80,86,82,85,87,83,88,84,89,71,70,76,72,75,77,73,78,74,79,61,60,66,62,65,67,63,68,64,69,51,50,56,52,55,57,53,58,54,59,41,40,46,42,45, 47,43,48,44,49,31,30,36,32,35,37,33,38,34,39,21,20,26,22,25,27,23,28,24,29,19,17,18,16,14,13,15,12,10,11,5,7,6,8,3,9,2,1,4};
  int k = sizeof(data) / sizeof(data[0]);
  
  cout << "Data Sebelum di Sorting: \n";
  printArray(data, k);

  quickSort(data, 0, k - 1);
  
  cout << "Data setelah di Sorting: \n";
  printArray(data, k222);
}