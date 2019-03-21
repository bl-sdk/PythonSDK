#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USearchOrigin()
{
    py::class_< USearchOrigin,  UObject   >("USearchOrigin")
        .def("StaticClass", &USearchOrigin::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}