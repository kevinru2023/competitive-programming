#include <iostream> 
#include <string> 

using namespace std;

int main(){
	int size; 
	string num; 

   	cin >> size; 

	for(int i = 0; i < size; i++){ 
		cin >> num; 

		if (num.size() <= 2){
			cout << "NO" << endl; 
			continue; 
		}

		if(num.substr(0,2) == "10"){ //number starts with 10
			//num is longer than 3 char and doesn't start with 0 or num is 3 char and 3 char is bigger than 1
			if(num.size() > 3 && num[2] != '0' || (num.size() == 3 && num[2] - '0' > 1)){ 
				cout << "YES" << endl;
			}
			else{
				cout << "NO" << endl; 
			} 
		}
		else{ //longer than 2 char and doesnt start with 10 
			cout << "NO" << endl; 
		}	
	}
	 

	return 0; 
}
