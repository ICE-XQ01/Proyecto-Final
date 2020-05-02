#include <stdio.h>
#include <iostream>

using namespace std;
float a, b, c;
int main(){
	cout<<"Digite el priemr numero: "; cin>>a;
	cout<<"Digite el segundo numero: "; cin>>b;
	cout<<"Digite el tercer numero: "; cin>>c;
	if(a>b){
		if(a>c){
		  if(b>c){
		  	cout<<"\nEl orden es de mar: "<<a;
		  	cout<<" "<<b;
		  	cout<<" "<<c;
		  } 
		  else{
		    cout<<"\nEl orden es de mar: "<<a;
		  	cout<<" "<<c;
		  	cout<<" "<<b;
		  }
		}
		else{
		    cout<<"\nEl orden es de mar: "<<c;
		   	cout<<" "<<a;
		  	cout<<" "<<b;
		}
		
	}
	else{
		if(b>c){
			if(a>c){
				cout<<"\nEl orden es de mar: "<<b;
		  	    cout<<" "<<a;
		  	    cout<<" "<<c;
			}
			else{
				cout<<"\nEl orden es de mar: "<<b;
		  	    cout<<" "<<c;
		  	    cout<<" "<<a;
			}
		}
		else{
			cout<<"\nEl orden es de mar: "<<c;
		  	cout<<" "<<b;
		  	cout<<" "<<a;
		}
	}
	return 0;
}
