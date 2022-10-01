#include<iostream>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);
  int hasil = 0;
  for (int i = 0; i < N; i++) {
    int Bi;
    scanf("%d", &Bi);
    hasil += Bi;
  }
  printf("%d\n", hasil);
}
