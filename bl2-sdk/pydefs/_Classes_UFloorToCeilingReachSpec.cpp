#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFloorToCeilingReachSpec()
{
    py::class_< UFloorToCeilingReachSpec,  UForcedReachSpec   >("UFloorToCeilingReachSpec")
        .def("StaticClass", &UFloorToCeilingReachSpec::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}