#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetElevatorButtonGlowing(py::object m)
{
    py::class_< UBehavior_SetElevatorButtonGlowing,  UBehaviorBase   >(m, "UBehavior_SetElevatorButtonGlowing")
        .def("StaticClass", &UBehavior_SetElevatorButtonGlowing::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetElevatorButtonGlowing::ApplyBehaviorToContext)
          ;
}