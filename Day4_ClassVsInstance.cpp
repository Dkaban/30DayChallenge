// THE PROBLEM
// ***************************
// Write a Person class with an instance variable, , and a constructor that takes an integer, , as a parameter. 
// The constructor must assign  to  after confirming the argument passed as  is not negative; 
// if a negative argument is passed as , the constructor should set  to  and print Age is not valid, setting age to 0.. 
// In addition, you must write the following instance methods:
// yearPasses() should increase the  instance variable by .
// amIOld() should perform the following conditional actions:
// If , print You are young..
// If  and , print You are a teenager..
// Otherwise, print You are old..
// Solution Created By: Dustin Kaban
// Date: May 30th, 2020
// ***************************

using namespace std;
#include <iostream>

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
        if(initialAge < 0)
        {
            age = 0;
            printf("Age is not valid, setting age to 0.\n");
        }
        else
        {
            age = initialAge;
        }
    }

    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console 
        if(age < 13)
        {
            printf("You are young.\n");
        }
        else if(age >= 13 && age < 18)
        {
            printf("You are a teenager.\n");
        }
        else
        {
            printf("You are old.\n");
        }
    }

    void Person::yearPasses(){
        // Increment the age of the person in here
        age++;
    }

int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses(); 
        }
        p.amIOld();
      
		cout << '\n';
    }

    return 0;
}
