#include <iostream>
#include <cmath>
using namespace std;


bool is_prime(int n){
  double square_root = sqrt(n);
  int range = ceil(square_root) + 1;
    for(int i = 2; i < range; i++){
        if (n % i == 0){
            return false;
        }
    } 
    return true;
}


int main(){
    clock_t time;
    time = clock();
    for(int j = 2; j <= 10000000; j++){
        if(j == 2){
          cout << j << endl;
        }
        if(is_prime(j)){
            cout << j << endl;
        }
    }
    time = clock()-time;
    cout << (float)time/CLOCKS_PER_SEC << endl; 
}
