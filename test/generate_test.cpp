/**

   @file
   generate_test.cpp
   
   @brief
   Test the range based generate function.

   @copyright
   2015 Samuel B. Johnson

   @author:
   Samuel B. Johnson <sabjohnso@yahoo.com>
   
*/


// Standard header filse

#include <vector>



// Third-party header files

#include <combine/macro_tools.hpp>



// Range header files

#include <range/range.hpp>


int
main( int argc, char** argv )
{
  std::vector<int> x( 10 );

  
  range::generate( x, [i = 0]() mutable { return ++i; });

  auto it = begin( x );
  for( int i = 1; i <= x.size(); ++i, ++it )
  {
    COMBINE_TEST_EQUAL( i, *it );
  }
  
  return 0;
}

