#include <iostream>
using namespace std;

int main(){
    // statement do while
    int i = 0;
    do{
        cout << i << endl;
        i++;
    }while(i < 5);
    cout << endl;

    // statement while
    int i = 0;
    while(i < 5){
        cout << i << endl;
        i++;
    }
    cout << endl;

    // Statement For
    for (int i = 0; i <= 5; i++){
        for (int j = 0; j <= 5;j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    // Seigitiga siku siku
    for (int i = 1; i < 5;i++){
        for (int j = 1; j <= i;j++){
            cout << "*";
        }
        cout << endl;
    }
}