#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <iostream>
#include <fstream>
#include <ctime>
#include <algorithm>
#include <array>        
#include <random>
#include <string>

using namespace std;






void GenMac(string mac[], int size);




int main() {

    
    int capacity = 8;
    string A[capacity];
    GenMac(A, capacity);
    cout << A[1] << endl;
    
    
    
    //int mac1[6] = {0x00, 0x0d, 0x3f, 0xcd, 0x02, 0x5f};
    //int mac2[6] = {0x00, 0x0d, 0x3f, 0xcd, 0x02, 0x5f};
   
       
    //int mac1[6] = {0x00, 0x0d, 0x3f, 0xcd, 0x02, 0x5f};
    //GenMac(mac1, 6);
    //int mac2[6] = {0x00, 0x0d, 0x3f, 0xcd, 0x02, 0x5f};
    //GenMac(mac2, 6);
    
    
    
    //char macStr[18];
   // int array[6] = {0x00, 0x0d, 0x3f, 0xcd, 0x02, 0x5f};
   // snprintf(macStr, sizeof(macStr), "%02x:%02x:%02x:%02x:%02x:%02x",
           // array[0], array[1], array[2], array[3], array[4], array[5]);

    
   // cout << sizeof(array) << endl;
   // cout << sizeof(int) << endl;
   // int getArrayLength = sizeof(array) / sizeof(int);
   // cout << getArrayLength << endl;
    
    
    return 0;
    }




void GenMac(string mac[], int size){
    for(int j=0; j < size; j++){
        int i, tp;
       // srand(time(NULL) + getpid());
        for (i = 0; i < 6; i++){
            tp = rand() % 256;
            printf("%s%X%s", tp < 16 ? "0" : "", tp, i < 5 ? ":" : "\n");
        }
    };
}
