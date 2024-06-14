#include<iostream>
using namespace std;

int main(){
    int idade, i=0,j=0; // i = controle
    float altura;


    do{
        cout << "Digite sua idade: " <<endl;
        cin >> idade;
        cout << "Digite sua altura: " <<endl;
        cin >> altura;
        if(idade > 30){
            i++;
        }
        j++;
    }while(idade > 15 || altura < 1.75);

    cout << "Numero de Pessoas com mais de 30 anos: " << i <<endl;
    cout << "Numero de Pessoas intrevistadas: " <<  j <<endl;


}