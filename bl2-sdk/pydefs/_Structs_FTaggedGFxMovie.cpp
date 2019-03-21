#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTaggedGFxMovie()
{
    py::class_< FTaggedGFxMovie >("FTaggedGFxMovie")
        .def_readwrite("Movie", &FTaggedGFxMovie::Movie)
        .def_readwrite("Tag", &FTaggedGFxMovie::Tag)
  ;
}