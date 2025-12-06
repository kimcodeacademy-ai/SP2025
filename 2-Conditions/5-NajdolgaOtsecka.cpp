//
// Created by jakim on 12/6/2025.
/*
Да се напише програма која од тастатура чита три парови на координати (x1, y1), (x2, y2), (x3, y3),
секој во нов ред, како во пример внесот. Се смета дека координатите се за точките A, B, C соодветно.
Програмата го печати името на најдолгата отсечка, како во примерот. Се смета дека секогаш има една таква отсечка.
For example:
Input
-5 2
-8 -9
0 0
Result
BC
 */
//
#include "iostream"
#include "cmath"
using namespace std;

int main(){
    int x1, x2, x3, y1, y2, y3; //a(x1, y1), b(x2, y2), c(x3, y3)
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    int ab, bc, ac; /// ab - dolzina na otsecka pomegju a i b , bc - pomegju b i c, ac - pomegju a i c
    ///funkcijata abs ni vrakja apsolutna vrednost od vrednosta koja ja prakjame kako argument
    ab = abs(x1 - x2) + abs(y1 - y2);
    bc = abs(x2 - x3) + abs(y2 - y3);
    ac = abs(x1 - x3) + abs(y1 - y3);

    if(ab >= bc && ab >= ac){
        cout<<"AB e najgolema otsecka."<<endl;
    } else if(bc >= ab && bc >= ac){
        cout<<"BC e najgolema otsecka."<<endl;
    }else{
        cout<<"AC e najgolema otsecka."<<endl;
    }
}