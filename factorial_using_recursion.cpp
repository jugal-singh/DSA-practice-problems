#include <bits/stdc++.h>
using namespace std;

long factorial(int x);

int main() {
    int n;
    cout<<"enter a number: ";
    cin>>n;
    long fact = factorial(n);
    cout<<"factorial of "<<n<<": "<<fact;
    return 0;
}

long factorial(int x){
    if(x<=1)return 1;
    return x*factorial(x-1);
}