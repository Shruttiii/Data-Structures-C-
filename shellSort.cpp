#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of values of arrays"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter value:"<<(i+1)<<endl;
        cin>>arr[i];
    }
    int i,j,temp;
    for (int gap=n/2;gap>0;gap=gap/2)
    {
        for (i=gap;i<n;i++)
        {
             temp = arr[i];
             j=i;
            while(j>=gap && arr[j - gap]>temp){
                arr[j] = arr[j-gap];
                 j -= gap;}
            arr[j] = temp;
        }
    }
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
}
