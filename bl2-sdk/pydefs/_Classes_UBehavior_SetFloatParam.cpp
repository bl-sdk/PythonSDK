#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetFloatParam(py::object m)
{
    py::class_< UBehavior_SetFloatParam,  UParameterBehaviorBase   >(m, "UBehavior_SetFloatParam")
        .def_readwrite("Value", &UBehavior_SetFloatParam::Value)
        .def("StaticClass", &UBehavior_SetFloatParam::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetFloatParam::ApplyBehaviorToContext)
          ;
}