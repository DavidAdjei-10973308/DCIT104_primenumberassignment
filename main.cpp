//Index Number: 10973308
//Name: David Nana Ntow Adjei

#include <iostream>
using namespace std;

bool isPrime(int m){

    for(int i =2; i<m; i++){
        if(m%i == 0)
        return false;
    }
    return true;
}

int main(){
    int n;
    int total=0;
    cout<<"Enter a number"<<endl;
    cin>> n;
    for(int i=2; i<=n; i++){
        if(isPrime(i)){
            cout<< i<<endl;
            total=total + i;
        }
    }
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<"********************************************************"<<endl;
    cout<<"The sum of prime numbers between 1 and "<< +n<< " is "<< total<<endl;
    cout<<"********************************************************"<<endl;
return 0;
}
