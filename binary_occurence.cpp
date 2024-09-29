#include<iostream>
#include<cmath>
using namespace std;
int binary_occurence(int size,int arr[],int num,int skip_this_index,int* count)
{
int start=skip_this_index+1;

int end=size-1;
while (start<=end)
{
    int mid=start+(end-start)/2;
    if (arr[mid]==num)
    {
        if(mid!=skip_this_index)
        {
        (*count)++;
            return mid;
        }
        
    }
    else if (num<arr[mid])
    {
       end=mid-1;
    }
    else
    {
       start=mid+1;
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
int skip_this_index=-1;
int num;
cout<<"what you want to search ";
cin>>num;

while(true){
skip_this_index=binary_occurence(size,arr,num,skip_this_index,&count);
if(skip_this_index==-1){
    break;
}
}
cout<<" occurence is "<<count;
return 0;
}