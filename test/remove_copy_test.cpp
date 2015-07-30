/**
   @file
   remove_copy_test.cpp
   
   @brief
   Test the range based remove_copy function.

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
    std::vector< int > y;
    auto it = range::remove_copy( x, std::back_inserter( y ), 6 );
    COMBINE_TEST_EQUAL( x.size(), y.size());
  }

  // Remove the second element
  {
    std::vector< int > y;
    auto it = range::remove_copy( x, std::back_inserter( y ),  2 );
    COMBINE_TEST_EQUAL( y.size(), 4 );

  }
  return 0;
};
