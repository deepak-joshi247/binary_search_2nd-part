//to print 2 index number of desired 1 number one for when it first time occur second for second time occurence
#include<iostream>

using namespace std;

int binary_searchfunc(int size,int arr[],int num,int skip_this_index)
{
    int start=0;
    int end=size-1;
   
    while (start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==num)
        { 
            if(mid!=skip_this_index)  //to check if same index is being printed
            {
            
            start=mid+1; 
            return mid;  //to print one of the 2 index if num is found
            }
            else{
                start=mid+1;   //to increment start else it would be stuck here in loop as--
                //continue ..arr[mid]==num would always be true 
            }
            
        }
        
        if(arr[mid]>num)
        {
            end=mid-1;
        }
        else if (arr[mid]<num)
        {
            start=mid+1;
        }
        
    }
    return -1;  //as when start>end || end<start due to line 29 and lie 33 it would be out of loop and condition broke
}

int main()
{
int arr[100];
int num; //num to find
int size; //size of array
cout<<"give size of array \n";
cin>>size;
int skip_this_index=size;  // so now var has a val and if even if num is only at last it will not skip that
//now print array ele
cout<<"give element of array ";
for (int i = 0; i < size; i++)
{
    cin>>arr[i];
}
cout<<"give num ";
cin>>num;
//now we access our function

skip_this_index=binary_searchfunc(size,arr,num,skip_this_index);
cout<<skip_this_index<<" ";
skip_this_index=binary_searchfunc(size,arr,num,skip_this_index);
cout<<skip_this_index;
return 0;
}