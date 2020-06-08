// THE PROBLEM
// ***************************
// You are given two classes, Person and Student, where Person is the base class and Student is the derived class. 
// compute the average given the information and output that via a function call to the student->calculate function in the main.
// Solution Created By: Dustin Kaban
// Date: June 4th, 2020
// ***************************

#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;
	public:
        Student(string firstName, string lastName, int id, vector<int> scores) : Person(firstName, lastName, id)
        {
            this->testScores = scores;
        }

        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char calculate()
        {
            int avg = 0;
            for(int i=0;i<testScores.size();i++)
            {
                avg += testScores[i];
            }
            avg = avg/testScores.size();

            if(avg >= 90)
            {
                return 'O';
            }
            else if(avg >= 80)
            {
                return 'E';
            }
            else if(avg >= 70)
            {
                return 'A';
            }
            else if(avg >= 55)
            {
                return 'P';
            }
            else if(avg >= 40)
            {
                return 'D';
            }
            else 
            {
                return 'T';
            }
        }
};
