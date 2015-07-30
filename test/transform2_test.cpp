/**

   @file
   transform2_test.cpp

   @brief
   Test the range based transform2 function.

   @copyright
   2015 Samuel B. Johnson

   @author:
   Samuel B. Johnson <sabjohnso@yahoo.com>
   
 */


// Standard header files

#include <vector>



// Third-party header files

#include <combine/macro_tools.hpp>



// Range header files

#include <range/range.hpp>


int
main( int argc, char** argv )
{
  std::vector< int > x = { 1, 2, 3, 4, 5 };
  std::vector< int > y = { 5, 4, 3, 2, 1 };
  std::vector< int > z;

  COMBINE_TEST_EQUAL( x.size(), y.size());
  range::transform2( x, y, std::back_inserter( z ), []( auto a, auto b ){ return a+b; });

  COMBINE_TEST_EQUAL( x.size(), z.size());
  for( auto it = begin( z ); it != end( z ); ++it )
  {
    COMBINE_TEST_EQUAL( *it, 6 );
  }
  
  return 0;
  

  
}
