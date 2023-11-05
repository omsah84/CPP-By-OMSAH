#include <iostream>
using namespace std;

int findWarnedPrisoner(int n, int m, int s) {
    // Calculate the position of the warned prisoner using modular arithmetic
    int position = (s + m - 1) % n;
    
    // If the position is 0, it means the last prisoner received the candy, so return n
    return (position == 0) ? n : position;
}

int main() {
    int n; // Number of prisoners
    int m; // Number of candies
    int s; // Starting chair number

    cin>>n>>m>>s;
    
    int warnedPrisoner = findWarnedPrisoner(n, m, s);
    cout << "The prisoner to be warned sits in chair number " << warnedPrisoner << endl;
    
    return 0;
}
