/**
   @file
   is_partitioned_test.cpp

   @brief
   Test the range based is_partitioned function.

   @copyright	
   2015 Samuel B. Johnson

   @author: 
   Samuel Johnson <sabjohnso@yahoo.com>

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
  COMBINE_TEST_TRUE( range::is_partitioned( x, []( auto a ){ return a < 3; }));
  COMBINE_TEST_FALSE( range::is_partitioned( x, []( auto a ){ return a < 3 && a != 1; }));
  
  return 0;
}

