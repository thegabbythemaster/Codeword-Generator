#ifndef CODEWORD_GENERATOR_H_
#define CODEWORD_GENERATOR_H_
#include <iostream>
#include <stack>
#include <queue>
#include <string>
#include "CodewordGenerator.hpp"

class CodewordGenerator
{
    
public:
    CodewordGenerator() = default;


/*@param takes a string pattern
  @post takes in a string pattern
   returns the shortest string that matches the pattern exploring
  the space of possible alphabet permutations in Breadth First Search order
  the input string pattern is guaranteed to represent a valid regular expression pattern.
**/
    std::string generateShortestWord(std::string pattern);

/*@param takes a string pattern and an integar n
  @post takes a string pattern 
  @post takes int length
   returns a string of length n that matches the pattern exploring the space 
  of possible alphabet permutations in Depth First Search order.
  **/

   std:: string generateLengthWord(std:: string pattern, int length);

   
}; // end List
#endif
