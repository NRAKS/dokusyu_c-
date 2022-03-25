#include<iostream>
using namespace std;

class base{
    int i;
public:
    base(int n){
        cout << "baseクラスのコンストラクタ呼び出し\n";
        i = n;
    }
    ~base() {cout << "baseクラスのデストラクタ呼び出し\n";}
    void showi(){cout << i << endl;}
};

class derived : public base{
    int j;
public:
    derived(int n, int m) : base(m){
        cout << "baseクラスのコンストラクタ呼び出し\n";
        j = n;
    }
    ~derived() {cout << "derivedクラスのデストラクタ呼び出し\n";}
    void showj(){cout << j << endl;}
};

int main(){
    derived o(10, 20);

    o.showi();
    o.showj();

    return 0;
}