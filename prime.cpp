#include <iostream>
using namespace std;

int main() {
    int a, i, p=1;
    
    cout << "enter a nmuber ";
    cin >> a;

    
    for (i=2; i<a; i++) {
        if (a%i == 0) {
            p=0;
            break;
        }
    }

    if (a<2) 
    p = 0;

    if (p) {
        cout<<a<<"number is prime"<<endl;

        
        int  next=a+1;
        while (true) {
            int next=1;
            for (i = 2; i < next; i++) {
                if (next % i == 0) {
                    next = 0;
                    break;
                }
            }
            if (next) {
                cout<<"The next prime number is "<< next<<endl;
                break;
            }
            next++;
        }
    } else {
        cout<<a<<"is not a prime number"<<endl;
        cout<<"Factors of "<<a<< " are: ";
        for (i=1;i<=a;i++) {
            if (a%i == 0) {
                cout<<i;
            }
        }
        cout<<endl;
    }

    return 0;
}