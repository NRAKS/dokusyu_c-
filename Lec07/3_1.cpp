#include<iostream>
using namespace std;

class base{
public:
    base() {cout << "baseクラスのコンストラクタ呼び出し\n";}
    ~base(){cout << "baseクラスのデストラクタ呼び出し\n";}
};

class derived : protected base{
public:
    derived() {cout << "derivedクラスのコンストラクタ呼び出し\n";}
    ~derived(){cout << "derivedクラスのデストラクタ呼び出し\n";}
};

int main(){
    derived o;
    
    return 0;
}