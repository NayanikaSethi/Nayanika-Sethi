#include <iostream>
using namespace std;

int main() {
    int n;

    
    cout<<"enter number of elements you want to add";
    cin>>n;

    int arr[n];

    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    
    cout<<"reverse of array is";
    for (int i = n - 1; i >= 0; i--) {
        cout<<arr[i]<<" ";
    }
    

    
    int s=arr[0],l=arr[0];
    for (int i = 1; i < n; i++) {
        if(arr[i] < s) 
        s=arr[i];
        if(arr[i] > l) 
        l=arr[i];
    }

   
    int secondsmallest=-1;
    for (int i=0; i<n; i++) {
        if (arr[i] > s) {
            if (secondsmallest==-1 || arr[i] < secondsmallest) {
                secondsmallest=arr[i];
            }
        }
    }

  
    int secondlargest = -1;
    for (int i=0; i<n; i++) {
        if (arr[i] < l) {
            if (secondlargest==-1 || arr[i] > secondlargest) {
                secondlargest = arr[i];
            }
        }
    }

 
    if (secondsmallest == -1 || secondlargest == -1) {
        cout<<"there is no second largest or second smallest in this array"<<endl;
    } else {
        cout<<"Second smallest element"<<secondsmallest << endl;
        cout<<"Second largest element"<<secondlargest << endl;
    }

    return 0;
}