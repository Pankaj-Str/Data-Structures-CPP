// factorial of calculate

#include<iostream>
using namespace std;

int factorial(int n){

    // base case : factorial of 0 - 1

    if(n == 0 || n == 1){
        return 1;
    }else{
        // recursive case : n! = n * (n-1)!

        return n * factorial(n - 1);
    }

}
int main(){

    int num = 5;

    cout<<" factorial of "<<num << " is : "<<factorial(num)<<endl;

    return 0;
}
