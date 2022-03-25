#include <iostream>
using namespace std;

class myclass{
    int x;
public:
    myclass() {x = 0;}
    myclass(int n) {x = n;}
    int getx(){return x;}
};

int main(){
    myclass o1(10);
    myclass o2;
    myclass ob[5];

    cout << "o1: " << o1.getx() << "\n";
    cout << "o2: " << o2.getx() << "\n";
    cout << "ob[1]: " << ob[1].getx() << "\n";

    return 0;
}