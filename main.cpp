int isPrime(int n){
  if(n == 1)return false;

  if(n == 2 || n == 3) return true;

  if((n % 2 == 0) || (n % 3 == 0)) return false;

  for(int i = 5; i*i <= n; i = i+6)
    if((n % i == 0) || (n % (i+2) == 0)) return false;
  return true;  
}

#include <iostream>
using namespace std;
int main() {
  int x = 315;
  for(int i = 2; i <= 315; i++){
    if(x == 1) break;
    if (isPrime(i)){
      while(x % i == 0){
        x = x / i;
        cout << i << " ";
      }
    }
  }
}