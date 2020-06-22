// THE PROBLEM
// ***************************
// For a given array of n integers, the function returns the index of the element with the minimum value in the array. 
// If there is more than one element with the minimum value, the returned index should be the smallest one.
// If an empty array is passed to the function, it should raise an Exception.
// Solution Created By: Dustin Kaban
// Date: June 22nd, 2020
// ***************************

#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <cassert>
#include <set>

using namespace std;

int minimum_index(vector<int> seq) {
    if (seq.empty()) {
        throw invalid_argument("Cannot get the minimum value index from an empty sequence");
    }
    int min_idx = 0;
    for (int i = 1; i < seq.size(); ++i) {
        if (seq[i] < seq[min_idx]) {
            min_idx = i;
        }
    }
    return min_idx;
}

class TestDataEmptyArray {
public:
    static vector<int> get_array() {
        vector<int> arr {};
        return arr;
    }

};

class TestDataUniqueValues {
public:
    static vector<int> get_array() {
        vector<int> arr {1, 2};
        return arr;
    }

    static int get_expected_result() {
        return 0;
    }

};

class TestDataExactlyTwoDifferentMinimums {
public:
    static vector<int> get_array() {
        vector<int> arr {1, 2, 1};
        return arr;
    }

    static int get_expected_result() {
       return 0;
    }

};
