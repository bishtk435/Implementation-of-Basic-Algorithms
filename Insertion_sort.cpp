/*
        Insertion Sort
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
    {
        cout<<"Enter the number "<<i<<" element: ";
        cin>>a[i];
    }
    int j,temp ;
    for(int i=1;i<n;++i)
    {
            j=i-1;
            temp=a[i];
            while(j>=0&&a[j]>temp)
            {
                a[j+1]=a[j];
                --j;
            }
            a[j+1]=temp;
    }
    cout<<"Sorted Array: ";
    for(int i=0;i<n;++i)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
