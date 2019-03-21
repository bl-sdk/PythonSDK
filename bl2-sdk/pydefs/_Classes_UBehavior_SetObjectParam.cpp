#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetObjectParam()
{
    py::class_< UBehavior_SetObjectParam,  UParameterBehaviorBase   >("UBehavior_SetObjectParam")
        .def_readwrite("Value", &UBehavior_SetObjectParam::Value)
        .def("StaticClass", &UBehavior_SetObjectParam::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetObjectParam::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}