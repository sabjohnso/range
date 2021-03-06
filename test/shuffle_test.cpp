/**

   @file
   shuffle_test.cpp

   @brief
   Test the range based shuffle function.

   @copyright	
   2015 Samuel B. Johnson

   @author: 
   Samuel Johnson <sabjohnso@yahoo.com>

*/


// Standard header files

#include <random>
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
  range::shuffle( x, std::default_random_engine());
  
  std::vector<int> y = { 1, 2, 3, 4 };
  std::is_permutation( begin( x ), end( x ), begin( y ));
 
    
  return 0;
  
}
