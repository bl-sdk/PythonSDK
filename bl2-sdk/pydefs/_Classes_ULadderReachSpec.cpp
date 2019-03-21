#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULadderReachSpec()
{
    py::class_< ULadderReachSpec,  UReachSpec   >("ULadderReachSpec")
        .def("StaticClass", &ULadderReachSpec::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}