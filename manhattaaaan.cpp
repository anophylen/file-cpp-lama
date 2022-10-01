#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	int x1,x2,y1,y2,hasil,hasil2,hasil3;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	hasil = x1-x2;
	hasil2 = y1-y2;
	if (hasil<0){
		hasil = hasil*-1;
	}
	if (hasil>0){
		hasil = hasil;
	}
		if (hasil2<0){
		hasil2 = hasil2*-1;
	}if (hasil2>0){
		hasil2 = hasil2;
	}
	hasil3 = hasil+hasil2;
	printf("%d", hasil3);
	
}
