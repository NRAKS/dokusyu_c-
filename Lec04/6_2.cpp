#include <iostream>
using namespace std;

void f(int &n);

int main(){
    int i=0;
    f(i);

    cout << "iの新しい値: " << i << "\n";
    return 0;
}

void f(int &n){
    n = 100;
}