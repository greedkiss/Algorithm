#include <iostream>

using namespace std;

int arr[7];

int main(){
    int i = 0, n = 7;
    for( ; i < 7; i++){
        arr[i] = 1 + i;
    }
    i = 0;
    while(1){
        i = (i + 3 - 1) % n;
        printf("%dout\n", arr[i]);
        for(int j = i; j < n - 1; j++){
            arr[j] = arr[j+1];
        }
        if((--n) == 1){
            break;
        }
    }
    return 0;
}