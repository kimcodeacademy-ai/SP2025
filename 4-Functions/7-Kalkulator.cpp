//
// Created by jakim on 12/10/2025.
/*
Да се напише програма која на влез ќе прима два цели броеви и за тие броеви
ќе испечати збир, разлика, производ и количник.
 *Операциите да се вршат во функции кои како аргумент ги примаат двата броја.
 */
//
#include "iostream"

using namespace std;

int zbir(int a, int b) {
    return a + b;
}

int razlika(int a, int b) {
    return a - b;
}

int proizvod(int a, int b) {
    return a * b;
}

float kolicnik(int a, int b) {
    return (float) a / b;
}


int main() {
    int a, b;
    cin >> a >> b;
    cout<<"Zbir: "<<zbir(a, b)<<endl;
    cout<<"Razlika: "<<razlika(a, b)<<endl;
    cout<<"Proizvod: "<<proizvod(a, b)<<endl;
    cout<<"Kolicnik: "<<kolicnik(a, b)<<endl;

}
