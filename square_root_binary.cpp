#include<iostream>
#include<cmath>
using namespace std;
int sqr_binary(int size,int num,int arr[])
{
int start=0;
int end=size-1;
while (start<=end)
{
    long mid=start+(end-start)/2;
    long long sqr=long  (arr[mid]*arr[mid]) ; // if input is big it cant handle so we use simple 
    //                                 multiplication with long 
    if(sqr<=num)
    {
        if(mid!=size-1)
        {
    
        long long sqr1=long (arr[mid+1]*arr[mid+1]);
    
    
        if (sqr1>num)
        {
           return mid;
        }
        
        
        else
        {
            start=mid+1;
        }
        }
    }
    else
    {
        end=mid-1;
    }
    
}
return -1;
}
int main()
{


int num;
cout<<" what you want to find ";
cin>>num;
int size=num;
int arr[size];

for (int i = 0; i < size; i++)
{
arr[i]=i;
}
double value=sqr_binary(size,num,arr);
cout<<" square is at index "<<value;

// now for decimal part
int count=0;
while((value*value)<=num)
{
value=value+0.1;
}
value=value-0.1;
while ((value*value)<=num)
{
    value+=0.01;
}
value-=0.01;
cout<<" the real value is "<<value;

return 0;
}