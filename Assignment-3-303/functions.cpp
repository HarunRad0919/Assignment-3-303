#include "functions.h"
using namespace std;

//Function to move the first index in the queue from the front to the back of the queue
void move_to_rear(queue<int>& testQueue){
  //Saving the first number in the queue
  int firstNum = testQueue.front();
  //Removing first index from the queue
  testQueue.pop();
  //Adding the saved number to the end of the queue
  testQueue.push(firstNum);
}

//Function to check if a string is a palindrome
bool isPalindrome(string s) {
  //checking if the length of the string is less than or equal to 1 (because if its one or less characters in the string then it is considered a palindrome)
	if (s.length() <= 1) {
		return true;
	}
  //checking if the first value of the string is equal to the last value of the string
	if (s[0] == s[s.length() - 1]) {
    //use recursion to create a copy of that string from the next position on its right
		return isPalindrome(s.substr(1, s.length() - 2));
	}
  //return false if it isn't a palindrome
	return false;
}

//Function to print out the map 
void printMap(map<string,string> stateDataMap){
  //Initialize the iterator
  map<string,string>:: iterator itr;
  //For loop to go through the first string and then to the next string saved in the map
  for (itr = stateDataMap.begin(); itr != stateDataMap.end(); itr++){
    cout << "State: " << itr->first << " || " << "Capital: " <<  itr->second << endl;
  }
}

void printCapital(map<string,string> stateDataMap, string state){
  //Asking the user for their input 
  cout << "Enter your desired state name: ";
  cin >> state;
  //Initialize the iterator
  map<string,string>::iterator itr;
  //using .find to find the first occurrence of the string in the map
  itr = stateDataMap.find(state);
  //If it can't find the string in the map then it will print that it wasn't found in the map
  if (itr == stateDataMap.end()){
    cout << state << " is not found in the map" << endl;
  }
  //If it was found then it says the capital of the given state
  else {
    cout << "Capital of " << state << " is " << itr->second << endl;
  }
}