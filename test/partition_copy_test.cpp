/**
   @file
   partition_copy_test.cpp

   @brief
   Test the range based partition_copy function.

   @copyright	
   2015 Samuel B. Johnson

   @author: 
   Samuel Johnson <sabjohnso@yahoo.com>

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

  std::vector<int> x = { 1, 2, 3, 4, 5 };
  std::vector<int> ytrue;
  std::vector<int> yfalse;
  
  auto pred = []( auto a ){ return a > 3; };
  
  auto its = range::partition_copy( x, std::back_inserter( ytrue ), std::back_inserter( yfalse ),  pred );
  COMBINE_TEST_EQUAL( ytrue.size(), 2 );
  COMBINE_TEST_EQUAL( yfalse.size(), 3 );

  return 0;

}
