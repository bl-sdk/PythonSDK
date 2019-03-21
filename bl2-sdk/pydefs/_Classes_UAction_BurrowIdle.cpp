#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_BurrowIdle()
{
    py::class_< UAction_BurrowIdle,  UAction_Idle   >("UAction_BurrowIdle")
        .def("StaticClass", &UAction_BurrowIdle::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}