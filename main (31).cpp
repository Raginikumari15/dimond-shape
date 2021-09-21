#include<iostream>
using namespace std;


int main(){
    int i,j,n1,n2,n,k;
    cin>>n;
    n2=n/2,n1=(n-n/2);
    for(i=1;i<=n1;i++)
    {
    for(k=1;k<=n1-i;k++){
    	cout<<" ";
	}
	for(j=1;j<=2*i-1;j++){
		cout<<'*';
	}
	cout<<endl;
                  
    }
    
        for(i=n2;i>=1;i--){
            for(k=1;k<=n1-1;k++){
                cout<<" ";
            }
            for( j=1;j<=2*i-1;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    
}
    


    

