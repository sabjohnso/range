/**
   
   @file
   is_sorted_test.cpp

   @brief
   Test the range based is_sorted function.

   @copyright	
   2015 Samuel B. Johnsonn

   @author: 
   Samuel Johnson <sabjohnso@yahoo.com>

 */


// Standard header files

#include <algorithm>
#include <vector>
#include <iterator>


// Third-party header files

#include <combine/macro_tools.hpp>



// Range header files

#include <range/range.hpp>



int
main( int argc, char** argv )
{
  std::vector<int> x = { 1, 2, 3, 4 };
  COMBINE_TEST_TRUE( range::is_sorted( x ));
  COMBINE_TEST_FALSE( range::is_sorted( x, []( auto a, auto b ){ return a > b; }));
  return 0;
}
