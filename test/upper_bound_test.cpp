/**
   
   @file
   upper_bound_test.cpp

   @brief
   Test the range based upper_bound function.

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


  std::vector<int> x = { 1, 2, 3, 4, 5 };

  {
    auto it = range::upper_bound( x, 3 );
    std::cout << *it << std::endl;
    COMBINE_TEST_EQUAL( *it, 4 );
    COMBINE_TEST_EQUAL( std::distance( begin( x ), it ), 3 );
  }

  {
    auto it = range::upper_bound( x, 3, []( auto a, auto b ){ return a < b; });
    std::cout << *it << std::endl;
    COMBINE_TEST_EQUAL( *it, 4 );
    COMBINE_TEST_EQUAL( std::distance( begin( x ), it ), 3 );      
  }
  


  
  return 0;
  
} 
