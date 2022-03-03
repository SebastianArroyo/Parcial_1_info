#include <iostream>

using namespace std;
string bina(int entero);

int main()
{
    string valores="", paso="", bin="";
    int i=0, i2=0, num=0, ind=0;
    cout << "Ingrese la lista de valores: " << endl;
    cin >> valores;

    for(i=0;i<valores.length(); i++){

        for (i2=i;valores[i2]!= ',';i2++){
            if(valores[i2]=='\0'){
                break;
            }
            else {
                paso+=valores[i2];
                num=stoi(paso);
                ind++;
            }
        }
        bin=bina(num);

        cout << "bin: " << bin << " "<< "num: " << num << endl;

        i+=ind;
        paso="";
        ind=0;
        num=0;
    }
    return 0;
}


string bina(int entero)
{
    string linea_binario="";
    if (entero>=0){
        while (entero >0) {
            if (entero%2==0){
                linea_binario="0"+linea_binario;
            }
            else {
                linea_binario="1"+linea_binario;
            }
            entero=entero/2;
        }
        while (linea_binario.length()<8){
            linea_binario="0"+linea_binario;
        }
    }
    return linea_binario;
}
