//
// Created by jakim on 12/7/2025.
/*Да се напишат соодветни функции за пресметување на дијаметар, периметар и плоштина на
 * круг чиј што радиус се предава како аргумент. Потоа да се напише и програма во која
 * за внесен (од тастатура) радиус ќе се повикаат овие функции за да се пресметаат дијаметарот,
 * периметарот и плоштината на соодветниот круг. На крај да се испечатат во формат:
Input: 5
Dijametar: 10
Perimetar: 31.41
Ploshtina: 78.525
 * */
//
#include "iostream"

using namespace std;

const float Pi = 3.141;


int dijametar(int r) {
    int d = 2 * r;
    return d;
}

float perimetar(int r) {
    float L;
    L = 2 * r * Pi;
    return L;
}

float plostina(int r) {
    float P;
    P = r * r * Pi;
    return P;
}

int main() {
    int radius;
    cin >> radius;
    cout<<"Dijametar: "<<dijametar(radius)<<endl;
    cout<<"Perimetar: "<<perimetar(radius)<<endl;
    cout<<"Ploshtina: "<<plostina(radius)<<endl;

}