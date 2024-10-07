
        #include <iostream>
#include <climits>
using namespace std;

int allocate(int size, int arr[]) {
    int start = 0;
    int end = 100;
    
    
    while (start <= end) {
        int mid = start + (end - start) / 2;
        int sum1 = 0;
        int sum2 = 0;
        bool possible = true;

        for (int i = 0; i < size; ++i) {
            if (sum1 + arr[i] <= mid) {    
                sum1 += arr[i];
            } else if (sum2 + arr[i] <= mid) {
                sum2 += arr[i];
            } else {
                possible = false;
                break;
            }
        }
        
        if (possible) {
           
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return start;
}

int main() {
    int arr[] = {10, 20, 30, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "The minimum max sum is " << allocate(size, arr) << endl;
    return 0;
}


//=================painter partition======================================
#include<iostream>
#include<cmath>
using namespace std;
int partion(int arr[],int size,int sum)
{
int start=0;
int end=sum;
bool possible=true;
while(start<=end)
{
    int mid=start+(end-start)/2;
    for (int i = 0; i < size; i++)
    {
        int sum1=0;
        int sum2=0;
       if(arr[i]+sum1<=mid)
       {
        sum1+=arr[i];
       }
       else if (sum2+arr[i]<=mid)
       {
        sum2+=arr[i];
       }
       else{
       
        possible=false;
        break;
       }
    }
    
    
 if(possible){
           end=mid-1;
        }
        else
        {
            start=mid+1;
        }
}
    return start;
}



int main()
{
    int size;
    cout<<"array size";
    cin>>size;
int arr[size];
cout<<" give array element\n";
for (int i = 0; i < size; i++)
{
cin>>arr[i];
}
int sum=0;
for (int i = 0; i < size; i++)
{
sum=sum+arr[i];
}
cout<<" min is "<<partion(arr,size,sum);
return 0;
}