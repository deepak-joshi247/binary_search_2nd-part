#include<iostream>
#include<cmath>
using namespace std;
int search_rotate_sort(int size,int num,int arr[])
{
int start=0;
int end=size-1;
while (start<=end)
{
    int mid=start+(end-start)/2;
    if(arr[mid]!=num){
        if(arr[0]<num)
        {
                end--;
        }
        else
        {
            start++;
        }
        
    }
    else
    {
       
        return mid;
    }
    
}
return -1;
}
int main()
{
int arr[100];
int size;
cout<<"size is ";
cin>>size;
cout<<" give array element ";
for (int i = 0; i < size; i++)
{
cin>>arr[i];
}
int num;
cout<<" what you want to find ";
cin>>num;
cout<<search_rotate_sort(size,num,arr);
return 0;
}