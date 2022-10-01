#include <cstdio>
using namespace std;

int N;
int main(){
	scanf("%d", &N);
	if(N>0 && N<=9){
		printf("satuan");
			
	}
	else if(N>=10 && N<=99){
		printf("puluhan");
		
		}
		else if(N>=100 && N<=999){
		
			printf("ratusan");
		}
		else if(N>=1000 && N<10000){
		
			printf("ribuan");
		}
		else if(N>=10000 && N<=99999){
		
			printf("puluhribuan");
		}
		

	}
