// Two numbers are given, print their product

#include <iostream>
using namespace std;

int main(){
    int a, b;
    // cin a >> " ">>b >>endl;
    // endl , " " causes compilation erors , we dont need to use these in input ( cin )
    cin >>a>>b;
    int product = a*b;
    cout << product << endl;
    return 0;
}