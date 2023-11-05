#include<bits/stdc++.h>
#include<iostream>
using namespace std;

unsigned int flipBits(unsigned int N) {
    // Define a bitmask with all bits set to 1
    unsigned int bitmask = ~0;

    // XOR N with the bitmask to flip all the bits
    return N ^ bitmask;
}

int main(){
    unsigned int N = 9;
    unsigned int ans = (~N);
    cout<<ans;
    
    return 0;
}