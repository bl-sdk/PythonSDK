#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowOnlineGameSearchNarrow()
{
    py::class_< UWillowOnlineGameSearchNarrow,  UWillowOnlineGameSearch   >("UWillowOnlineGameSearchNarrow")
        .def("StaticClass", &UWillowOnlineGameSearchNarrow::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}