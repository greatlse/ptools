// This file has been generated by Py++.

#include "vector_less_double_comma_std_scope_allocator_less_double_grate___grate_.pypp.hpp"
#include "boost/python.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "/ibpc/rhea/saladin/Src/ptools/trunk/ptools.h"

namespace bp = boost::python;

void register_vector_less_double_comma_std_scope_allocator_less_double_grate___grate__class(){

    { //::std::vector<double,std::allocator<double> >
        typedef bp::class_< std::vector<double,std::allocator<double> > > vector_less_double_comma_std_scope_allocator_less_double_grate___grate__exposer_t;
        vector_less_double_comma_std_scope_allocator_less_double_grate___grate__exposer_t vector_less_double_comma_std_scope_allocator_less_double_grate___grate__exposer = vector_less_double_comma_std_scope_allocator_less_double_grate___grate__exposer_t( "vector_less_double_comma_std_scope_allocator_less_double_grate___grate_" );
        bp::scope vector_less_double_comma_std_scope_allocator_less_double_grate___grate__scope( vector_less_double_comma_std_scope_allocator_less_double_grate___grate__exposer );
        vector_less_double_comma_std_scope_allocator_less_double_grate___grate__exposer.def( bp::vector_indexing_suite< ::std::vector<double,std::allocator<double> >, true >() );
    }

}