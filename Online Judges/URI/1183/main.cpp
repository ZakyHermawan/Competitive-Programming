#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char c;
    float matriz[12][12], soma = 0, cont = 0;

    cin >> c;

    for ( int i = 0 ; i < 12; i++) {
        for ( int j = 0 ; j < 12; j++) {
            cin >> matriz[i][j];
        }
    }

    for ( int i = 0 ; i < 12; i++) {
        for ( int j = i + 1; j < 12; j++) {
            soma = soma + matriz[i][j];
            cont++;
        }
    }


    switch (c) {
        case 's' :
        case 'S' : printf("%.1f\n",soma);
                   break;
        case 'm' :
        case 'M' : printf("%.1f\n",soma/cont);
                   break;
    }
    return 0;
}
