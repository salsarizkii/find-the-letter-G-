#include<iostream>
#define panjang 20

int urutan;
char hurufList[panjang] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N'};

int main (){
    for(int i = 0; i < panjang; i++){
        if(hurufList[i] == 'G') {
            urutan = i + 1; 
        }
    }

    printf("huruf G ada di urutan ke-%d", urutan);
}