#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double Vproduto, Vsubtotal;
    int produtos=0; //controle da quantidade de produtos
    char pagamento;


    do{
        cout << "Informe o valor unitario do produto: ";
        cin >> Vproduto;
        produtos++;
        Vsubtotal += Vproduto;
    }while(Vproduto > 0);
    

    cout << produtos-1 <<endl;
    cout << Vsubtotal <<endl;

    if (Vsubtotal > 0){
        cout << "'1' para Dinheiro (10% de desconto)" <<endl;
        cout << "'2' para Debito (5% de desconto)" <<endl;
        cout << "'3' para Credito (Sem desconto)" <<endl;
        cout << "Informe a forma de pagamento: ";
        cin >> pagamento;

        switch (pagamento){
            case '1':
                cout << "Selecionado: Dinheiro(10% de desconto)" <<endl;
                cout << "Desconto: " << Vsubtotal*0.1 <<endl;
                cout << "Subtotal: " << Vsubtotal <<endl;
                cout << fixed << setprecision(2) << "Total: " << Vsubtotal-(Vsubtotal*0.1) <<endl;

                break;
            
            case '2':
                cout << "Selecionado: Debito(5% de desconto)" <<endl;
                cout << "Desconto: " << Vsubtotal*0.05 <<endl;
                cout << "Subtotal: " << Vsubtotal <<endl;
                cout << fixed << setprecision(2) << "Total: " << Vsubtotal-(Vsubtotal*0.05) <<endl;
                break;
            
            case '3':
                cout << "Selecionado: Credito(Sem desconto)" <<endl;
                cout << "Desconto: 0" << endl;
                cout << "Subtotal: " << Vsubtotal <<endl;
                cout << fixed << setprecision(2) << "Total: " << Vsubtotal <<endl;

                break;
            
            default:
                break;
        }

    }
    else{
        
    }

}