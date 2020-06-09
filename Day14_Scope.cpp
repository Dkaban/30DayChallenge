// THE PROBLEM
// ***************************
// Complete the Difference class by creating a constructor that copies an array into elements
// And a computeDifference function that gets the difference between the highest and lowest variables in an array
// Solution Created By: Dustin Kaban
// Date: June 9th, 2020
// ***************************

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
    
    // ******************** MY CODE *****************************
    Difference(vector<int> arr)
    {
        this->elements = arr;
    }

    void computeDifference()
    {
        sort(elements.begin(),elements.end());
        maximumDifference = abs(elements[0]-elements[elements.size()-1]);
    }
    // **************** END OF MY CODE **************************

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
