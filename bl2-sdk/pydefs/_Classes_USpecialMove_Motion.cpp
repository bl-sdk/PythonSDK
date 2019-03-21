#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMove_Motion()
{
    py::class_< USpecialMove_Motion,  UWillowAnimDefinition   >("USpecialMove_Motion")
        .def("StaticClass", &USpecialMove_Motion::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}