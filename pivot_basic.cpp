// pivot mean index number of minimum element here in the rotated sorted array

// GRAPH
// |
// |
// |     /   <-- this is first part which is increasing and 
// |    /          has element greater than second part
// |   /           /   <- this is second part of array which increases but its 
// |  /           /           element is less than that of first part 
// |             /
// |            / <-pivot is here
// |
// |-------------------------------------------------------------

// this changes as per ascending and decending order of array

#include<iostream>
#include<cmath>
using namespace std;
int pivot_finder(int size,int arr[])
{
int start=0;
int end=(size-1);
while (start<end)
{
   int mid=start +(end-start)/2;
    if(arr[mid]>arr[0])
    {
        start=mid+1;
    }
    else
    {
        end=mid; //not used mid -1 as then it would take me to first part
    }
    
}
return end;
}

int main()
{
int arr[100];
int size;
cout<<"give size of array";
cin>>size;
cout<<" give array ele ";
for (int i = 0; i < size; i++)
{
cin>>arr[i];
}
cout<<" pivot is "<<pivot_finder(size,arr);
return 0;
}

// ---------------------------or --------------------------------

#include<iostream>
#include<cmath>
using namespace std;

int pivot_finder(int size,int arr[])
{
int start=0;

int end=size-1;
while (start<end)
{
    int mid=start+(end-start)/2;
   if(arr[mid]<=arr[mid-1])
        {
            if(arr[mid<=arr[mid+1]])
            {
                
                return mid;
            }
            else
                {
                start=++start;
                }
            
        }
   else
   {
    start=start+1;
   }
   
}
return start;
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

cout<<" pivot is "<<pivot_finder(size,arr);

return 0;
}