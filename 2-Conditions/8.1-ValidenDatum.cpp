//
// Created by jakim on 12/7/2025.
//
#include "iostream"
using namespace std;

int main(){
    int den, mesec, godina;
    cin>>den>>mesec>>godina;
    //meseci so 31 den - 1, 3, 5, 7, 8, 10, 12
    //meseci so 30 dena 4, 6, 9, 11
    //februari 28 (29 vo prestapna godina)
    bool leap = (godina % 4 == 0 && godina % 100 != 0) || (godina % 400 == 0);

    if (mesec > 0 && mesec < 13 && den > 0) {
        if ((mesec == 1 || mesec == 3 || mesec == 5 || mesec == 7 ||
             mesec == 8 || mesec == 10 || mesec == 12) && den <= 31)
            cout << "DA"<<endl;
        else if ((mesec == 4 || mesec == 6 || mesec == 9 || mesec == 11) && den <= 30)
            cout << "DA"<<endl;
        else if (mesec == 2 && ((leap && den <= 29) || (!leap && den <= 28)))
            cout << "DA"<<endl;
        else
            cout << "NE"<<endl;
    } else {
        cout << "NE"<<endl;
    }

}