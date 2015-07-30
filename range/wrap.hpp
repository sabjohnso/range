/**
   @file
   wrap.hpp

   @brief
   Wrap function templates in structs

   @copyright	
   2015 Samuel B. Johnson

   @author: 
   Samuel B. Johnson <sabjohnso@yahoo.com>

*/


#ifndef WRAP_HPP_INCLUDED
#define WRAP_HPP_INCLUDED


#include <range/import.hpp>


namespace range
{

  namespace wrap
  {
    struct all_of
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::all_of( std::forward<Xs>( xs ) ... );
      }
    };

    struct any_of
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::any_of( std::forward<Xs>( xs ) ... );
      }
    };

    struct none_of
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::none_of( std::forward<Xs>( xs ) ... );
      }
    };

    struct for_each
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::for_each( std::forward<Xs>( xs ) ... );
      }
    };

    struct find
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::find( std::forward<Xs>( xs ) ... );
      }
    };

    struct find_if
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::find_if( std::forward<Xs>( xs ) ... );
      }
    };

    struct find_if_not
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::find_if_not( std::forward<Xs>( xs ) ... );
      }
    };

    struct find_end
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::find_end( std::forward<Xs>( xs ) ... );
      }
    };

    struct find_first_of
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::find_first_of( std::forward<Xs>( xs ) ... );
      }
    };

    struct adjacent_find
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::adjacent_find( std::forward<Xs>( xs ) ... );
      }
    };

    struct count
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::count( std::forward<Xs>( xs ) ... );
      }
    };

    struct count_if
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::count_if( std::forward<Xs>( xs ) ... );
      }
    };

    struct mismatch
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::mismatch( std::forward<Xs>( xs ) ... );
      }
    };

    struct equal
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::equal( std::forward<Xs>( xs ) ... );
      }
    };

    struct is_permutation
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::is_permutation( std::forward<Xs>( xs ) ... );
      }
    };

    struct search
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::search( std::forward<Xs>( xs ) ... );
      }
    };

    struct search_n
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::search_n( std::forward<Xs>( xs ) ... );
      }
    };

    struct copy
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::copy( std::forward<Xs>( xs ) ... );
      }
    };

    struct copy_if
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::copy_if( std::forward<Xs>( xs ) ... );
      }
    };

    struct copy_backward
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::copy_backward( std::forward<Xs>( xs ) ... );
      }
    };

    struct move
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::move( std::forward<Xs>( xs ) ... );
      }
    };

    struct move_backward
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::move_backward( std::forward<Xs>( xs ) ... );
      }
    };

    struct swap
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::swap( std::forward<Xs>( xs ) ... );
      }
    };

    struct swap_ranges
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::swap_ranges( std::forward<Xs>( xs ) ... );
      }
    };

    struct transform
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::transform( std::forward<Xs>( xs ) ... );
      }
    };

    struct replace
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::replace( std::forward<Xs>( xs ) ... );
      }
    };

    struct replace_if
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::replace_if( std::forward<Xs>( xs ) ... );
      }
    };

    struct replace_copy
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::replace_copy( std::forward<Xs>( xs ) ... );
      }
    };

    struct replace_copy_if
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::replace_copy_if( std::forward<Xs>( xs ) ... );
      }
    };

    struct fill
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::fill( std::forward<Xs>( xs ) ... );
      }
    };

    struct generate
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::generate( std::forward<Xs>( xs ) ... );
      }
    };

    struct remove
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::remove( std::forward<Xs>( xs ) ... );
      }
    };

    struct remove_if
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::remove_if( std::forward<Xs>( xs ) ... );
      }
    };

    struct remove_copy
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::remove_copy( std::forward<Xs>( xs ) ... );
      }
    };

    struct remove_copy_if
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::remove_copy_if( std::forward<Xs>( xs ) ... );
      }
    };

    struct unique
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::unique( std::forward<Xs>( xs ) ... );
      }
    };

    struct unique_copy
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::unique_copy( std::forward<Xs>( xs ) ... );
      }
    };

    struct reverse
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::reverse( std::forward<Xs>( xs ) ... );
      }
    };

    struct reverse_copy
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::reverse_copy( std::forward<Xs>( xs ) ... );
      }
    };

    struct rotate
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::rotate( std::forward<Xs>( xs ) ... );
      }
    };

    struct rotate_copy
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::rotate_copy( std::forward<Xs>( xs ) ... );
      }
    };

    struct random_shuffle
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::random_shuffle( std::forward<Xs>( xs ) ... );
      }
    };

    struct shuffle
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::shuffle( std::forward<Xs>( xs ) ... );
      }
    };

    struct is_partitioned
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::is_partitioned( std::forward<Xs>( xs ) ... );
      }
    };

    struct partition
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::partition( std::forward<Xs>( xs ) ... );
      }
    };

    struct stable_partition
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::stable_partition( std::forward<Xs>( xs ) ... );
      }
    };

    struct partition_copy
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::partition_copy( std::forward<Xs>( xs ) ... );
      }
    };

    struct partition_point
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::partition_point( std::forward<Xs>( xs ) ... );
      }
    };

    struct sort
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::sort( std::forward<Xs>( xs ) ... );
      }
    };

    struct stable_sort
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::stable_sort( std::forward<Xs>( xs ) ... );
      }
    };

    struct partial_sort
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::partial_sort( std::forward<Xs>( xs ) ... );
      }
    };

    struct partial_sort_copy
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::partial_sort_copy( std::forward<Xs>( xs ) ... );
      }
    };

    struct is_sorted
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::is_sorted( std::forward<Xs>( xs ) ... );
      }
    };

    struct is_sorted_until
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::is_sorted_until( std::forward<Xs>( xs ) ... );
      }
    };

    struct nth_element
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::nth_element( std::forward<Xs>( xs ) ... );
      }
    };


    struct lower_bound
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::lower_bound( std::forward<Xs>( xs ) ... );
      }
    };

    struct upper_bound
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::upper_bound( std::forward<Xs>( xs ) ... );
      }
    };

    struct equal_range
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::equal_range( std::forward<Xs>( xs ) ... );
      }
    };

    struct binary_search
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::binary_search( std::forward<Xs>( xs ) ... );
      }
    };

    struct merge
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::merge( std::forward<Xs>( xs ) ... );
      }
    };

    struct inplace_merge
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::inplace_merge( std::forward<Xs>( xs ) ... );
      }
    };

    struct includes
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::includes( std::forward<Xs>( xs ) ... );
      }
    };

    struct set_union
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::set_union( std::forward<Xs>( xs ) ... );
      }
    };

    struct set_intersection
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::set_intersection( std::forward<Xs>( xs ) ... );
      }
    };

    struct set_difference
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::set_difference( std::forward<Xs>( xs ) ... );
      }
    };

    struct set_symmetric_difference
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::set_symmetric_difference( std::forward<Xs>( xs ) ... );
      }
    };

    struct push_heap
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::push_heap( std::forward<Xs>( xs ) ... );
      }
    };

    struct pop_heap
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::pop_heap( std::forward<Xs>( xs ) ... );
      }
    };

    struct make_heap
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::make_heap( std::forward<Xs>( xs ) ... );
      }
    };

    struct sort_heap
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::sort_heap( std::forward<Xs>( xs ) ... );
      }
    };

    struct is_heap
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::is_heap( std::forward<Xs>( xs ) ... );
      }
    };

    struct is_heap_until
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::is_heap_until( std::forward<Xs>( xs ) ... );
      }
    };

    struct min_element
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::min_element( std::forward<Xs>( xs ) ... );
      }
    };

    struct max_element
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::max_element( std::forward<Xs>( xs ) ... );
      }
    };

    struct minmax_element
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::minmax_element( std::forward<Xs>( xs ) ... );
      }
    };

    struct lexicographical_compare
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::lexicographical_compare( std::forward<Xs>( xs ) ... );
      }
    };

    struct next_permutation
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::next_permutation( std::forward<Xs>( xs ) ... );
      }
    };


    struct prev_permutation
    {
      template< typename ... Xs >
      auto operator ()( Xs&& ... xs ){
	return import::prev_permutation( std::forward<Xs>( xs ) ... );
      }
    };


  
  } // end of namespace wrap
} // end of namespace range



#endif // WRAP_HPP_INCLUDED
