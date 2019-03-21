#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_GetVectorParam()
{
    py::class_< UBehavior_GetVectorParam,  UParameterBehaviorBase   >("UBehavior_GetVectorParam")
        .def("StaticClass", &UBehavior_GetVectorParam::StaticClass, py::return_value_policy::reference)
        .def("PublishBehaviorOutput", &UBehavior_GetVectorParam::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_GetVectorParam::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}