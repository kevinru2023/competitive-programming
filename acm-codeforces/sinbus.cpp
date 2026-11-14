/*
seats start at 1 to some num n

rules for sitting:
1. no occupied seats sit whereever
2. occupied seats? sit in seat in which i-1 or i+1 has somebody sitting in it
ex:
(1 is occupied, 0 is unoccupied)
[1, 0 , 0, 0 , 1] <-- somebody is allowed to sit in i=1 or i=3 ,but NOT i=2

given arr a which is what seats the passengars sat in

input is as follows(all can be got from stdin):
t <-- number of testcases
n <-- int representing seats between 1, 200k
a <-- ints representing where passengars sat down

for this problem i think the solution lies in first creating an array then also creating a hash set
to list all the nums then looping through the array and checking each element (i) if i+1 or i-1 is in the hash map
*/

#include <iostream>
#include <string>
#include <sstream> 
#include <vector>
#include <unordered_set>

using namespace std;

int main()
{
    int testcases;
    cin >> testcases;

    for (int i = 0; i < testcases; i++)
    {
        unordered_set<int> nums; //using unordered_set to allow for o(1) search and insertion 
        int arrsize; //to occupy array and set
        bool v = true; 

        cin >> arrsize;
        cin.ignore(); //ignore the newline 
        
        for(int j = 0; j < arrsize; j++){
            int n; 
            cin >> n;  
            cin.ignore(); 
            //if there is a seat next to the current item occupied or no seats are taken 
            if(nums.find(n+1) != nums.end() || nums.find(n-1) != nums.end() || nums.empty()){
                nums.insert(n);  
            }else{
                v = false;
            }
        }

        cout << (v ? "YES" : "NO") << endl; 
    }

    return 0;
}