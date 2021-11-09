#include <iostream>
#include <conio.h>
using namespace std;

//Pivot yang digunakan adalah angka urutan tengah

void quick_sort(int arr[], int kiri, int kanan)
{
      int i = kiri, j = kanan;int tmp;
      int pivot = arr[(kiri+kanan)/2];
  
  
   while (i<j){
   while (arr[i] < pivot)
   i++;
   while (arr[j] > pivot)
   j--;
   if (i<=j){
    tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
    i++;j--;
                                                    };
         }; 
      if (kiri < j)
      quick_sort(arr, kiri, j);
      if (i < kanan)
            quick_sort(arr, i, kanan);
}



int main()
{
  
   int i,n,data[100];
   
   cout<<"Implementasi Quick Sort\n";
   cout<<"=======================\n";
   cout<<"\n\n";
   cout<<"Masukan banyak data: ";
   cin>>n;
   
   for(i=0;i<n;i++)
    {
      cout<<"Masukan data ["<<i<<"] : ";
      cin>>data[i];}
      cout<<"\nData sebelum diurutkan: "<<endl;
      
  for(i=0;i<n;i++)
   {
     cout<<data[i]<<" ";
     }
     cout<<"\n";
     quick_sort(data,0,n-1);

//hasil pengurutan
     cout<<"\nHasil pengurutan:\n";
    {
       int i;
       
       for (i=0;i<n;i++)
        cout<<data[i]<<" ";
        cout<<"\n";
      }
      getch();
}
