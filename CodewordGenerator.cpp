#include <iostream>
#include "CodewordGenerator.hpp"
#include <stack>
#include <queue>
#include <regex>


/*@param takes a string pattern
  @post takes a string pattern
  returns the shortest string that matches the pattern using 
  breathd first search
**/
std::string CodewordGenerator:: generateShortestWord(std::string pattern){
		std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		std::queue<std::string> firstQ;
		std:: string tempString = "";
		std::string Result_BFS = "";
		std::string current_string = "";
		firstQ.push(Result_BFS);
		std::regex re(pattern);

		while(!firstQ.empty()){

			current_string = firstQ.front();

			firstQ.pop();
			Result_BFS = current_string; 
			if(std::regex_match(Result_BFS,re) == true){

			return Result_BFS;
	
			}

		else{
				for(int i=0; i <= alphabet.length(); i++){
					tempString =  current_string + alphabet[i];
					firstQ.push(tempString);

				}	

		}
	}

	return Result_BFS;
	

}


/*@param takes a string pattern and an integar n
  @post takes in a string pattern
  @post takes in int length
  returns a string of length n that matches the pattern using  Depth First Search order.
  **/
 std:: string CodewordGenerator:: generateLengthWord(std:: string pattern, int length){
 		std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		std::stack<std::string> firstS;
		std:: string tempString_two = "";
		std::string Result_BFS_two = "";
		std::string current_string_two = "";
		firstS.push(Result_BFS_two);
		std::regex re(pattern);

		while(!firstS.empty()){

			current_string_two = firstS.top();

			firstS.pop();
			Result_BFS_two = current_string_two; 
			if(std::regex_match(Result_BFS_two,re) == true && current_string_two.length() == length){

			return Result_BFS_two;
	
			}

		else if(current_string_two.length() < length){
				for(int i=0; i <= alphabet.length(); i++){
					//std::cout<<tempString_two<<std::endl;
					tempString_two =  current_string_two + alphabet[i];
					firstS.push(tempString_two);

				}	

		}
	}
	return Result_BFS_two;
 }

