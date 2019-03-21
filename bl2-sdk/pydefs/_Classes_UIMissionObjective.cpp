#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIMissionObjective()
{
    py::class_< UIMissionObjective,  UInterface   >("UIMissionObjective")
        .def("StaticClass", &UIMissionObjective::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjectiveBit", &UIMissionObjective::eventGetObjectiveBit)
        .staticmethod("StaticClass")
  ;
}