//to find peak in mountain of array
#include<iostream>
#include<cmath>
using namespace std;

int binary_peak(int size,int arr[])
{
int start=0;

int end=size-1;
while (start<=end)
{
    int mid=start+(end-start)/2;
   if(arr[mid]>arr[mid-1])
   {
    if(arr[mid>arr[mid+1]]){
        cout<<"peak is "<<arr[mid]<<" at index "<<mid;
        return 1;
    }
    else
    {
        start=++start;
    }
    
   }
   else
   {
    end=--end;
   }
   
}
return -1;

}

int main()

{
int count=0;
int arr[100];
int size;
cout<<"size is ";
cin>>size;
 cout<<" give element ";
for (int i = 0; i < size; i++)
{
cin>>arr[i];
}


binary_peak(size,arr);
return 0;
}