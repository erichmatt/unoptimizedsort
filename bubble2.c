#include<stdio.h>

int tbs[] = {4,3,2,5};
int sorta(){
int c;
c = 0; 
int x=1;
for(c;c<3;c++){
	printf("Doing a pass");
	if(tbs[c] > tbs[c+1]){
	tbs[c+1] = tbs[c+1]^tbs[c];
	tbs[c] = tbs[c]^tbs[c+1];
	tbs[c+1] = tbs[c+1]^tbs[c];
	//swap(tbs[c], tbs[c+1]);
	x = 0;}
	
}
return x;
}
int main(){
int i;
i=0;
int x = 0;
while(x == 0){
x = sorta();
}
for(i;i<4;i++){
printf("%d,",tbs[i]);
}
}
