#include<iostream>
#include <ctime> 
#include<cmath>
using namespace std;
//----------------- STATEMENT -----------------
// The following iterative sequence is defined for the set of positive integers:
// 
// n → n/2 (n is even)
// n → 3n + 1 (n is odd)
// 
// Using the rule above and starting with 13, we generate the following sequence:
// 13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
// 
// It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.
// Which starting number, under one million, produces the longest chain?
// NOTE: Once the chain starts the terms are allowed to go above one million.


//----------------- SOLVE -----------------

//----------------- FUNCTION -----------------
long long serieCollatz(long long x){
    long long cont = 1;
    while( x != 1){
        if(x % 2 == 0){
            x /= 2;
        }
        else{
            x = 3 * x + 1;
        }
        cont ++;
    }
    return cont;
}
//----------------- MAIN -----------------
int main(){
    long max = 1;
    long long val = 0;
    long collatz;
    for(int i = 1; i < 1000000; i++){
        collatz = serieCollatz(i);
        if(collatz > max){
            val = i;
            max = collatz;
        }
    }
    cout << val;       
}