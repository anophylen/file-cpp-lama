#include <cstdio>
using namespace std;

int main(){
	int N, M;
	scanf("%d %d", &N, &M);
	int hasil = N/M;
	int hasil2 = N%M;
	printf("masing-masing %d\n", hasil);
	printf("bersisa %d", hasil2);
}
