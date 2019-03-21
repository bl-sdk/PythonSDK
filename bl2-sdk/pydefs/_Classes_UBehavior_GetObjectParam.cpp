#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_GetObjectParam()
{
    py::class_< UBehavior_GetObjectParam,  UParameterBehaviorBase   >("UBehavior_GetObjectParam")
        .def("StaticClass", &UBehavior_GetObjectParam::StaticClass, py::return_value_policy::reference)
        .def("PublishBehaviorOutput", &UBehavior_GetObjectParam::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_GetObjectParam::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}