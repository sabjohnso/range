/**
   
   @file
   set_intersection_test.cpp

   @brief
   Test the range based set_intersection function.

   @copyright	
   2015 Samuel B. Johnsonn

   @author: 
   Samuel Johnson <sabjohnso@yahoo.com>

*/


// Standard header files

#include <algorithm>
#include <vector>
#include <iterator>


// Third-party header files

#include <combine/macro_tools.hpp>



// Range header files

#include <range/range.hpp>



int
main( int argc, char** argv )
{

  std::vector<int> x = { 1, 2, 3, 4 };
  std::vector<int> y = { 3, 4, 5, 6 };

  {
    std::vector<int> z;
    range::set_intersection( x, y, std::back_inserter( z ));

    
    std::copy( begin( z ), end( z ), std::ostream_iterator<int>( std::cout, "," ));
    std::cout << std::endl;
    
    std::vector<int> zexpected = { 3, 4 };

    COMBINE_TEST_EQUAL( z.size(), zexpected.size());
    COMBINE_TEST_TRUE( std::equal( begin( z ), end( z ), begin( zexpected )));
    
  }

  
  {
    std::vector<int> z;
    range::set_intersection( x, y, std::back_inserter( z ), []( auto a, auto b ){ return a < b; });

    std::copy( begin( z ), end( z ), std::ostream_iterator<int>( std::cout, "," ));
    std::cout << std::endl;
    
    std::vector<int> zexpected = { 3, 4 };
    

    COMBINE_TEST_EQUAL( z.size(), zexpected.size());
    COMBINE_TEST_TRUE( std::equal( begin( z ), end( z ), begin( zexpected )));
    
  }

  return 0;
  
}
