#include <iostream>
#include <unordered_map>
#include <map>
#include <string>
#include <fstream>
using namespace std;

class CrosswordList {
  protected:
    map<int,pair<string,string>> answers; //list for the answers and questions
    int size; //list size
    string puzzle[21][20]; //String array for generating a puzzle
  public:
    CrosswordList(string crossword); //load the list of numbers, answers and questions
    void printCrossWordList(int wordNum); //print out the number and question
    bool checkAnswer(int wordNum, string answer, bool correct); //check if the input answer is correct
    void creatPuzzle(int wordNum); //generate the puzzle
    void printPuzzle(); //print the puzzle
    int getSize(); //get the size of the list
};