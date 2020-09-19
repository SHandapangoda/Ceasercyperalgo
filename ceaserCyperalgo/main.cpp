#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
    int i, x;
    char attr[100];

    cout << "Enter a string value\t" << endl;
    cin >> attr;

    cout << "press 1 for encrypt \n";
    cout << "press 2 for decrypt \n";

    cin >> x;

    switch (x) {
        case 1:
            for (i = 0; (i < 100 && attr != "\0"); i++)
                attr[i] = attr[i] + 2;

            cout << "Encrypted String " << encrypt(i,attr[]) << endl;
            break;
        case 2:
            for (i = 0; (i < 100 && attr != "\0"); i++)
                attr[i] = attr[i] - 2;

            cout << "Decrypted message " << decrypt(i,attr[]) << endl;
            break;
        default:
            cout << "Invalid entry " << endl;

    }

}

char Encrypt(int i,char attr[100]){
    for(i=0;(i<100&&attr!="\0");i++)
        attr[i]=attr[i]+2;

    return attr[i];
}

char Decrypt(int i,char attr[100]){
    for(i=0;(i<100&&attr!="\0");i++)
        attr[i]=attr[i]-2;

    return attr[i];
}
