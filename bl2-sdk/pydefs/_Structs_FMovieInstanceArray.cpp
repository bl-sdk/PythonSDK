#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMovieInstanceArray()
{
    py::class_< FMovieInstanceArray >("FMovieInstanceArray")
        .def_readwrite("Movies", &FMovieInstanceArray::Movies)
        .def_readwrite("PoolParent", &FMovieInstanceArray::PoolParent)
  ;
}