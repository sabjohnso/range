/**

   @file
   remove_if_test.cpp
   
   @brief
   Test the range based remove_if function.

   @copyright
   2015 Samuel B. Johnson

   @author:
   Samuel B. Johnson <sabjohnso@yahoo.com>
   
*/


// Standard header files

#include <vector>
#include <iterator>


// Third-party header files

#include <combine/macro_tools.hpp>


// Range header files

#include <range/range.hpp>



int
main( int argc, char** argv )
{
  std::vector< int > x = { 1, 2, 3, 4, 5 };

  // Don't remove any elements
  {
    auto it = range::remove_if( x, []( auto a ) { return a == 6; });
    COMBINE_TEST_EQUAL( std::distance( it, end( x ) ), 0 );
  }

  // Remove the second element
  {
    auto it = range::remove_if( x, []( auto a ){ return a == 2; });
    COMBINE_TEST_EQUAL( std::distance( begin( x ), it ), 4 );
    x.resize( std::distance( begin( x ), it ));
  }
  
  return 0;
};
