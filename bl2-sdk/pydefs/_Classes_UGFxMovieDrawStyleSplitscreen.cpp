#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxMovieDrawStyleSplitscreen()
{
    py::class_< UGFxMovieDrawStyleSplitscreen,  UGFxMovieDrawStyle   >("UGFxMovieDrawStyleSplitscreen")
        .def("StaticClass", &UGFxMovieDrawStyleSplitscreen::StaticClass, py::return_value_policy::reference)
        .def("eventRequiresClientInstance", &UGFxMovieDrawStyleSplitscreen::eventRequiresClientInstance)
        .staticmethod("StaticClass")
  ;
}