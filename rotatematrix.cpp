#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter order of square matrix";
    cin>>n;

    int arr[n][n];

   
    cout<<"Enter the elements of the matrix"<<endl;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin>>arr[i][j];
        }
    }

   
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) { 
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }

   
    for (int i=0; i<n; i++) {
        int left=0,right=n-1;
        while (left < right) {
            int temp=arr[i][left];
            arr[i][left] = arr[i][right];
            arr[i][right] = temp;
            left++;
            right--;
        }
    }

    
    cout<<"rotated matrix";
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}