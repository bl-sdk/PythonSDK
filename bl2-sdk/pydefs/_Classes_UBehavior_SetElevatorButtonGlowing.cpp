#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetElevatorButtonGlowing()
{
    py::class_< UBehavior_SetElevatorButtonGlowing,  UBehaviorBase   >("UBehavior_SetElevatorButtonGlowing")
        .def("StaticClass", &UBehavior_SetElevatorButtonGlowing::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetElevatorButtonGlowing::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}