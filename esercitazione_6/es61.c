#include <stdio.h>
#include <stdlib.h>


int inferiore(float x, float y){
    float nx, ny, absx, absy;
    nx=((float)((int)(x*10000)))/10000;
    ny=((float)((int)(y*10000)))/10000;
    if(nx<0){
        absx=-nx;
    }
    else{
        absx=nx;
    }
	if(ny<0){
        absy=-ny;
    }
    else{
        absy=ny;
    }
    if(absx<absy){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
	int n, i=0;
	float x, eps;
	scanf("%i",&n);
	scanf("%f",&x);
	scanf("%f",&eps);
	float * p;
	p=(float *) malloc(n*sizeof(float));
	if(p==NULL){
            exit(EXIT_FAILURE);
	}
	while(i<n){
	    printf("Inserisci il valore %i", i);
	    scanf("%f", &p[i]);
	    if(inferiore(p[i]-x,eps)==0){
	        printf("È nell'intorno");
	    }
	    else{
	        printf("Non è nell'intorno");
	    }
	    ++i;
	}
}
