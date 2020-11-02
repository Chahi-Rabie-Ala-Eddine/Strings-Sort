/*
  CHAHI Rabie Ala Eddine
  C++ Sort program
*/

#include <iostream>
#include <vector>

using namespace std;

/*Delete program output name from strings*/
void createStringsTab(vector <string>& strings, int size, char** input){
  for(int i = 1; i < size; i++)
     strings.push_back(input[i]);
}

/*Print vector of strings*/
void printStrings(vector<string> strings){
  cout << "Table [ ";
  for (vector<string>::const_iterator i = strings.begin(); i != strings.end(); ++i)
    cout << *i << ' ';
  cout << "]\n";
}

/*Sort function*/
void sortFunction(vector <string>& strings){
  for (int i = 0; i < strings.size(); ++i){
    int max = i;
      for (int j = i + 1; j < strings.size(); ++j)
        if (strings.at(max) > strings.at(j))
          max = j;

    if(i != max){
      string temp = strings.at(max);
      strings.at(max) = strings.at(i);
      strings.at(i) = temp;
    }
  }
}

/*Sort program*/
void sortProgram(vector <string>& strings, int size, char** input){
  cout << "\n\n#############Sort Program#############\n\n";
  createStringsTab(strings, size, input);
  cout << "Before sorting => "; printStrings(strings);
  sortFunction(strings);
  cout << "After sorting  => "; printStrings(strings); 
  cout << "\n##################End#################\n\n"; 
}

int main (int argc, char** argv){

  vector<string> strings;
  sortProgram(strings, argc, argv);
    
  return 0;
}