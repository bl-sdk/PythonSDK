#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_BoolMath()
{
    py::class_< UBehavior_BoolMath,  UBehaviorBase   >("UBehavior_BoolMath")
        .def_readwrite("Operation", &UBehavior_BoolMath::Operation)
        .def("StaticClass", &UBehavior_BoolMath::StaticClass, py::return_value_policy::reference)
        .def("PublishBehaviorOutput", &UBehavior_BoolMath::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_BoolMath::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}