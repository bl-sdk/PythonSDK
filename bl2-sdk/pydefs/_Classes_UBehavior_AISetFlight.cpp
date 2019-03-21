#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AISetFlight()
{
    py::class_< UBehavior_AISetFlight,  UBehaviorBase   >("UBehavior_AISetFlight")
        .def_readwrite("Mode", &UBehavior_AISetFlight::Mode)
        .def("StaticClass", &UBehavior_AISetFlight::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_AISetFlight::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}