/**
   
   @file
   partial_sort_copy_test.cpp

   @brief
   Test the range based partial_sort_copy function.

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
  std::vector<int> x = { 5, 4, 3, 2, 1 };

  {
    std::vector<int> y( 2 );
    range::partial_sort_copy( x,  y );

    
    std::vector<int> xexpected = { 5, 4, 3, 2, 1 };
    COMBINE_TEST_EQUAL( x.size(), xexpected.size());
    COMBINE_TEST_TRUE( std::equal( begin( x ), end( x ), begin( xexpected )));
    
    std::vector<int> yexpected = { 1, 2 };
    COMBINE_TEST_EQUAL( y.size(), yexpected.size());
    COMBINE_TEST_TRUE( std::equal( begin( y ), end( y ), begin( yexpected )));
  }

  {
    std::vector<int> y( 2 );
    range::partial_sort_copy( x,  y,  []( auto a, auto b ){ return a > b; });
    
    std::vector<int> xexpected = { 5, 4, 3, 2, 1 };
    COMBINE_TEST_EQUAL( x.size(), xexpected.size());
    COMBINE_TEST_TRUE( std::equal( begin( x ), end( x ), begin( xexpected )));
    
    std::vector<int> yexpected = { 5, 4 };
    COMBINE_TEST_EQUAL( y.size(), yexpected.size());
    COMBINE_TEST_TRUE( std::equal( begin( y ), end( y ), begin( yexpected )));
  }
  
  return 0;
}
