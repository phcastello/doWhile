#include<iostream>
using namespace std;

int main(){
    double n1, n2;
    cin >> n1;
    do{
        cin >> n2;
    }while(n2 == 0);

    cout << n1/n2;



    return 0;
}