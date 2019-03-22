#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxMovieDrawStyleSplitscreen(py::module &m)
{
    py::class_< UGFxMovieDrawStyleSplitscreen,  UGFxMovieDrawStyle   >(m, "UGFxMovieDrawStyleSplitscreen")
        .def("StaticClass", &UGFxMovieDrawStyleSplitscreen::StaticClass, py::return_value_policy::reference)
        .def("eventRequiresClientInstance", &UGFxMovieDrawStyleSplitscreen::eventRequiresClientInstance)
          ;
}