#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxMovieDrawStyleSplitscreen(py::module &m)
{
    py::class_< UGFxMovieDrawStyleSplitscreen,  UGFxMovieDrawStyle   >(m, "UGFxMovieDrawStyleSplitscreen")
        .def("eventRequiresClientInstance", &UGFxMovieDrawStyleSplitscreen::eventRequiresClientInstance)
          ;
}