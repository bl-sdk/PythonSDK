#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAIState_Priority()
{
    py::class_< UAIState_Priority,  UAIStateBase   >("UAIState_Priority")
        .def("StaticClass", &UAIState_Priority::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}