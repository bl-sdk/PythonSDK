#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_PhysXLevel()
{
    py::class_< UBehavior_PhysXLevel,  UBehaviorBase   >("UBehavior_PhysXLevel")
        .def("StaticClass", &UBehavior_PhysXLevel::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_PhysXLevel::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}