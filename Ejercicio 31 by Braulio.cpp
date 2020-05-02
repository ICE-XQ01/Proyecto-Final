#include <stdio.h>
#include <iostream>

using namespace std;
float a, b ,c;

int main(){
	cout<<"Digite el primer numero A: "; cin>>a;
	cout<<"Digite el segundo numero B: "; cin>>b;
	cout<<"Digite el tercer numero C: "; cin>>c;
	if(a>b){
		if(a>c){
			cout<<"\nA es el mayor";
		}
		else{
			if(a==c){
				cout<<"\nA y C son los mayores";
			}
			else{
				cout<<"\nC es el mayor";
			}
		}
    }
    else{
    	if(a==b){
    		if(a>c){
    			cout<<"\nA y B son los mayores";
    		}
    		else{
    			if(a==c){
    				cout<<"\nA, B y C son iguales";
    			}
    			else{
    				cout<<"\nC es el mayor";
    			}
    		}
    	}
    	else{
    		if(b>c){
    			cout<<"\nB es el mayor";
    		}
    		else{
    			if(b==c){
    				cout<<"\nB y C son los mayores";
    			}
    			else{
    				cout<<"\nC es el mayor";
    			}
    		}
    	}
    }
	return 0;
}
