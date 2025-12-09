//
// Created by jakim on 12/7/2025.
/*
Да се напише програма која за две низи кои се внесуваат од тастатура ќе
провери дали се еднакви или не. На екран да се испачати резултатот од споредбата.
Максимална големина на низите е 100.

Test cases:
5 5
1 2 3 4 5
1 2 3 4 5
Nizite se isti

5 5
1 2 3 4 5
1 2 3 4 4
Nizite ne se isti
 */
//
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    int counter = 0;
    int niza1[n], niza2[m];

    for(int i=0;i<n;i++){
        cin>>niza1[i];
    }
    for(int i=0;i<m;i++){
        cin>>niza2[i];
    }

    if(n != m){
        cout<<"Nizite ne se isti!"<<endl;
    } else{
        bool flag = true;
        for(int i = 0;i<n;i++){
            if(niza1[i] != niza2[i]){
                cout<<"Nizite ne se isti!"<<endl;
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"Nizite se isti!"<<endl;
        }

    }
    return 0;

}