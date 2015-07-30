/**
   
   @file
   copy_if_test.cpp

   @brief
   Test the range based copy_if algorithm

   @copyright	
   2015 Samuel B. Johnson

   @author: 
   Samuel B. Johnson <sabjohnso@yahoo.com>

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
  std::vector< int > x = { 1, 2, 3, 4, 5, 6, 7 };
  {
    std::vector< int > y;
    range::copy_if( x, std::back_inserter( y ), []( auto x ){ return x % 2 == 0; });
    std::vector< int > expected = { 2, 4, 6 };
    
    COMBINE_TEST_EQUAL( expected.size(), y.size());
    COMBINE_TEST_TRUE( std::equal( begin( expected ), end( expected ), begin( y )));
    
    
  }
  
  return 0;
}
