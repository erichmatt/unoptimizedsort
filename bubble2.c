#include<stdio.h>

int tbs[] = {4,3,2,5};
int x = 0;
int sorta(){
int c;
c = 0; 
x = 1;
for(c;c<3;c++){
	if(tbs[c] > tbs[c+1]){
	tbs[c+1] = tbs[c+1]^tbs[c];
	tbs[c] = tbs[c]^tbs[c+1];
	tbs[c+1] = tbs[c+1]^tbs[c];
	//swap(tbs[c], tbs[c+1]);
	x = 0;}
}
}
int main(){
int i;
i=0;
while(x == 0){
sorta();
}
for(i;i<4;i++){
printf("%d,",tbs[i]);
}
}
