#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMovieInstanceArray()
{
    class_< FMovieInstanceArray >("FMovieInstanceArray", no_init)
        .def_readwrite("Movies", &FMovieInstanceArray::Movies)
        .def_readwrite("PoolParent", &FMovieInstanceArray::PoolParent)
  ;
}