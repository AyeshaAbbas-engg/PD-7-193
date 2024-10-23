
#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter how many prime numbers' product you want: ";
    cin >> num;

    int product = 1;  
    int count = 0;    
    int i = 2;        

    while(count < num) { 
        bool isPrime = true;
        
        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime) {
            cout << i;
            count++;
        }

        i++;  
    }

   
}