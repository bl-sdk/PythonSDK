#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAIState()
{
    py::class_< UAIState,  UAIStateBase   >("UAIState")
        .def("StaticClass", &UAIState::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}