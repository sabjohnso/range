/**
   @file
   partition_point_test.cpp

   @brief
   Test the range based partition_point function.

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

  std::vector<int> x = { 1, 2, 3 , 4, 5 };
  auto it = range::partition_point( x, []( auto a ){ return a < 3; });
  std::cout << std::distance( begin( x ), it ) << std::endl;

  COMBINE_TEST_EQUAL( std::distance( begin( x ), it ), 2 );
  COMBINE_TEST_EQUAL( x.size(), 5 );
  int j = 1;
  for( auto jt = begin( x ); jt != end( x ); ++jt, ++j )
  {
    COMBINE_TEST_EQUAL( *jt, j );
  }

  return 0;

}
