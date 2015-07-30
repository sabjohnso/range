/**
   @file
   mismatch_test.cpp

   @brief
   A test for the range based mismatch function.

   @copyright
   2015 Samuel B. Johnson

   @author
   Samuel B. Johnson <sabjohnso@yahoo.com>

*/


// Standard header files

#include <utility>
#include <iterator>
#include <vector>
#include <list>


// Third-party header files

#include <combine/macro_tools.hpp>


// Range header files

#include <range/range.hpp>



int
main( int argc, char** argv )
{
  
  std::vector< int > x = { 1, 2, 3, 4, 5 };
  
  {
    std::list< int > y = { 1, 2, 4, 4, 5 };
    auto its = range::mismatch( x, y );
    COMBINE_TEST_EQUAL( std::distance( begin( x ), std::get<0>( its )), 2 );
  }


  {
    std::list< int > y = { 1, 2, 4, 4, 5 };
    auto its = range::mismatch( x, y, []( auto a, auto b ){ return a == b; });
    COMBINE_TEST_EQUAL( std::distance( begin( x ), std::get<0>( its )), 2 );
  }
  
  return 0;
  
}
