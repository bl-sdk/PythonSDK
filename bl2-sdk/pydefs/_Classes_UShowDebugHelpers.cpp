#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UShowDebugHelpers()
{
    py::class_< UShowDebugHelpers,  UObject   >("UShowDebugHelpers")
        .def("StaticClass", &UShowDebugHelpers::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}