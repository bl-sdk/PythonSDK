#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_GetVelocity()
{
    py::class_< UBehavior_GetVelocity,  UBehaviorBase   >("UBehavior_GetVelocity")
        .def("StaticClass", &UBehavior_GetVelocity::StaticClass, py::return_value_policy::reference)
        .def("PublishBehaviorOutput", &UBehavior_GetVelocity::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_GetVelocity::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}