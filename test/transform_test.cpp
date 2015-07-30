/**

   @file
   transform_test.cpp

   @brief
   Test the range based transform function.

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
  
  std::vector<int> x = { 1, 2, 3, 4, 5 };
  std::vector<int> y;

  range::transform( x, std::back_inserter( y ), []( auto a ){ return a*a; });
  

  COMBINE_TEST_EQUAL( y.size(), 5 );
  auto it = begin( y );
  for( int i = 1; i <= 5; ++i, ++it )
  {
    COMBINE_TEST_EQUAL( i*i, *it );
  }
  
  
  return 0;
}






