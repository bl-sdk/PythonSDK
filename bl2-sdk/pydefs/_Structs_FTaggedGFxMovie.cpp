#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTaggedGFxMovie(py::module &m)
{
    py::class_< FTaggedGFxMovie >(m, "FTaggedGFxMovie")
        .def_readwrite("Movie", &FTaggedGFxMovie::Movie)
        .def_readwrite("Tag", &FTaggedGFxMovie::Tag)
  ;
}