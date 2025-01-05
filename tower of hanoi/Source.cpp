#include <iostream>
#include <stdio.h>
using namespace std;
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod){
    if (n == 4) {
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

void towerOfHanoi(int n, char sourceP, char destinationP, char auxP1, char auxP2){
    if (n == 0)
        return;
    if (n == 1) {
       cout << "\n move disk " << n << " from peg " << sourceP << " to peg " << destinationP << endl;
        return;
    }

    towerOfHanoi(n - 2, sourceP, auxP1, auxP2, destinationP);

   cout << "move disk " << n - 1 << " from rod " << sourceP << " to rod " << auxP2 << endl;
   cout << "move disk " << n << " from rod " << sourceP << " to rod " << destinationP << endl;
   cout << "move disk " << n - 1 << " from rod " << auxP2 << " to rod " << destinationP << endl;
    towerOfHanoi(n - 2, auxP1, destinationP, sourceP, auxP2);
}


int main(){
    int n = 4;
    int m = 8;

 
    towerOfHanoi(n, 'A', 'C', 'B', 'D');
    towerOfHanoi(m, 'A', 'D', 'B');
    towerOfHanoi(n, 'C', 'D', 'B', 'A');
    return 0;
}