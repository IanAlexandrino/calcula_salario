#include <iostream>

using namespace std;

int main(){
    
    int op;
    int diasTrabalho;
    double valorUsuario;
    double horasUsuario;
    double valorFinal;

    do{
        cout << "|======CALCULA SALÁRIO======|\n" << endl;
        cout << "1. Calcular o meu salário" << endl;
        cout << "2. Sair do app" << endl;
        cout << "\nOpção: ";
        cin >> op;

        if(op == 2){
            cout << "\nAté a próxima!!!";
            return 0;
        }else if (op != 1){

            do{
                cout << "Opção incorreta, por favor selecione uma opção válida!" << endl;
                cout << "\nOpção: ";
                cin >> op;
            } while (op != 1 && op != 2);

            if(op == 2){
                cout << "\nAté a próxima!!!";
            return 0;
            }
        }
        
        cout << "\nInforme quantos dias você trabalha na semana: ";
        cin >> diasTrabalho;
        diasTrabalho = diasTrabalho * 4;
        cout << "\n";
        cout << "Agora informe quantas horas você trabalha por dia: ";
        cin >> horasUsuario;
        horasUsuario = horasUsuario * diasTrabalho;
        cout << "\n";
        cout << "Por último informe quanto você ganha por hora: " ;
        cin >> valorUsuario;
        cout << "\n";

        valorFinal = valorUsuario * horasUsuario;

        cout << "Nesse mês você irá receber " << valorFinal << " reais!\n" << endl;
    
    } while (op == 1);

    
    return 0;
}