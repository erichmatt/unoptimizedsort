#include<stdio.h>

int tbs[] = {4,3,2,5};
int x = 0;
int swap(){
int c;
c = 0; 

for(c;c<4;c++){
	x = 0;
	if(tbs[c] >= tbs[c+1]){
	tbs[c+1] = tbs[c+1]^tbs[c];
	tbs[c] = tbs[c]^tbs[c+1];
	tbs[c+1] = tbs[c+1]^tbs[c];
	x = 0;}
	else{x=1;}
}
}
int main(){
int i;
i=0;
while(x == 0){
swap();
}
for(i;i<4;i++){
printf("%d,",tbs[i]);
}
}
