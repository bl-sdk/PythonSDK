#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_Delay()
{
    py::class_< UBehavior_Delay,  UBehaviorBase   >("UBehavior_Delay")
        .def_readwrite("Delay", &UBehavior_Delay::Delay)
        .def("StaticClass", &UBehavior_Delay::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_Delay::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}