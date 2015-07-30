/**
   
   @file
   equal_range_test.cpp

   @brief
   Test the range based equal_range function.

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


  std::vector<int> x = { 1, 2, 3, 3, 4, 5 };

  {
    auto its = range::equal_range( x, 3 );
    COMBINE_TEST_EQUAL( *its.first, 3 );
    COMBINE_TEST_EQUAL( *its.second, 4 );
    COMBINE_TEST_EQUAL( std::distance( its.first, its.second ), 2 );
  }

  {
    auto its = range::equal_range( x, 3, []( auto a, auto b ){ return a < b; });
    COMBINE_TEST_EQUAL( *its.first, 3 );
    COMBINE_TEST_EQUAL( *its.second, 4 );
    COMBINE_TEST_EQUAL( std::distance( its.first, its.second ), 2 );
    
    
  }
  


  
  return 0;
  
} 
