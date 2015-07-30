/**
   @file
   partitioned_test.cpp

   @brief
   Test the range based partitioned function.

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

  auto pred = []( auto a ){ return a > 3; };

  auto it = range::partition( x, pred );
  COMBINE_TEST_EQUAL( std::distance( begin( x ), it ), 2 );
  COMBINE_TEST_TRUE( std::is_partitioned( begin( x ), end( x ), pred ));

  return 0;

}
