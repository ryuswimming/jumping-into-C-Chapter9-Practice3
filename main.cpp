#include <iostream>

using namespace std;

bool isPrime(int);
int sumOfPrimeFactor(int);

int main() {
  for (int i = 2; i <= 1000; i++) {
    if (isPrime(sumOfPrimeFactor(i)) == true) cout << i << " ";
  }
}

bool isPrime(int i) {
  for (int j = 2; j < i; j++) {
    if (i % j == 0) return false;
  }
  return true;
}

int sumOfPrimeFactor(int i) {
  int sumOfPrimeFactor = 0;
  for (int j = 2; j <= i; j++) {
    if (i%j == 0 && isPrime(j)) sumOfPrimeFactor += j;
  }
  return sumOfPrimeFactor;
}
