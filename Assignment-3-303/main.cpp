#include "functions.h"
using namespace std;

int main() {
  //Problem 1
  cout << "Problem 1 --------------------------------------------------\n\n";
  //Initializing the queue
  queue<int> myQueue;
  //Creating the queue
  for (int i = 0; i < 5; i++){
    myQueue.push(i);
  }
  cout << "Before moving an integer to the front: ";
  //Printing the queue
  while(!myQueue.empty()){
    cout << myQueue.front();
    myQueue.pop();
  }
  cout << "\nAfter removing front and adding it to the rear: ";
  //Recreating the queue because of the pop statement deleting the last queue
  for (int i = 0; i < 5; i++){
    myQueue.push(i);
  }
  //Calling the move_to_rear function
  move_to_rear(myQueue);
  //Printing the new queue
  while(!myQueue.empty()){
    cout << myQueue.front();
    myQueue.pop();
  }

  //Problem 2
  cout << "\n\nProblem 2 --------------------------------------------------\n";
  //Iniitalizing the strings
  string test1 = "civic";
	string test2 = "Harun";
  //Testing if each test string is a palindrome
	if (isPalindrome(test1)){
		cout << endl << test1 << " is a palindrome!\n";
	}
	else {
		cout << test1 << " is not a palindrome!\n";
	}
	if (isPalindrome(test2)) {
		cout << test2 << " is a palindrome!\n";
	}
	else {
		cout << test2 << " is not a palindrome!\n";
	}

  //Problem 3
  cout << "\nProblem 3 --------------------------------------------------\n\n";
  //Iniitalizing the map of the state and capitals and state string
  map<string, string> stateDataMap;
  string state;
  //Assigning each state with its capital
  stateDataMap["Nebraska"] = "Lincoln";
  stateDataMap["New York"] = "Albany";
  stateDataMap["Ohio"] = "Columbus";
  stateDataMap["California"] = "Sacramento";
  stateDataMap["Massachusetts"] = "Boston";
  stateDataMap["Texas"] = "Austin";
  //Calling the function to print the map
  printMap(stateDataMap);
  //Calling the function to print the capital
  printCapital(stateDataMap, state);
  //Changing the capital of California to Los Angeles
  stateDataMap["California"] = "Los Angeles";
  cout << "After the California change!\n";
  //Calling the function to print the map again
  printMap(stateDataMap);
  //Calling the function to print the capital again
  printCapital(stateDataMap, state);
  return 0;
}