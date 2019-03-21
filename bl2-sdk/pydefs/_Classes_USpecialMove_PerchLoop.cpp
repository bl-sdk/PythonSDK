#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMove_PerchLoop()
{
    py::class_< USpecialMove_PerchLoop,  UWillowAnimDefinition   >("USpecialMove_PerchLoop")
        .def("StaticClass", &USpecialMove_PerchLoop::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}