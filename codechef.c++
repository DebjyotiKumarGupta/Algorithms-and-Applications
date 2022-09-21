#include <iostream>
using namespace std;

int main() {
	int t , n , k , arr[n], brr[k];
	cin>>t;
	while(t--){
	    cin>>n;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    cin>>k;
	     for(int i=0;i<k;i++){
	        cin>>brr[i];
	    }
	    for(int i=0;i<k;i++){
	        for(int j=0;j<n;j++){
	            if(brr[i]==arr[i]){
	                arr[i]=-1;
	            }
	            else{
	                continue;
	            }
	        }
	    }
	    for(int i=0;i<n;i++){
	        if(arr[i]!=-1){
	            cout<<arr[i]<<" "<<endl;
	        }
	    }
	    
	}
	return 0;
}