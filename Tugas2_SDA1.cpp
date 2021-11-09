#include<stdlib.h>
#include<stdio.h> 
#include<iostream>
using namespace std;
  
int a[100];
void merge(int,int,int);
void merge_sort(int rendah,int tinggi)
{
 int tengah;
 if(rendah<tinggi)
 {
  tengah=(rendah+tinggi)/2;
  merge_sort(rendah,tengah);
  merge_sort(tengah+1,tinggi);
  merge(rendah,tengah,tinggi);
 }
}
void merge(int rendah,int tengah,int tinggi)
{
 int h,i,j,b[100],k;
 h=rendah;
 i=rendah;
 j=tengah+1;
 while((h<=tengah)&&(j<=tinggi))
 {
  if(a[h]<=a[j])
  {
   b[i]=a[h]; h++;
  }
  else
  {
   b[i]=a[j]; j++;
  } i++;
 }
 if(h>tengah)
 {
  for(k=j;k<=tinggi;k++)
  {
   b[i]=a[k]; i++;
  }
 }
 else
 {
  for(k=h;k<=tengah;k++)
  {
   b[i]=a[k]; i++;
  }
 }
 for(k=rendah;k<=tinggi;k++)
  a[k]=b[k];
}
main()
{
 int num,i;
 cout<<"---------------------------"<<endl;
 cout<<"    ALGORITMA MERGE SORT C++ "<<endl;
 cout<<"---------------------------"<<endl;
 cout<<endl;
 cout<<"Masukkan Banyak Bilangan: ";cin>>num;
 cout<<endl;
 cout<<"Sekarang masukkan "<< num <<" Bilangan yang ingin Diurutkan :"<<endl;
 for(i=1;i<=num;i++)
 {
   cout<<"\n";
  cout<<"Bilangan ke-"<<i<<": ";cin>>a[i] ;
 }
 merge_sort(1,num);
 cout<<endl;
 cout<<"\n";
 cout<<"Hasil akhir pengurutan :"<<endl;
 cout<<endl;
 for(i=1;i<=num;i++)
  cout<<a[i]<<" ";
 cout<<endl<<endl<<endl<<endl;
 }