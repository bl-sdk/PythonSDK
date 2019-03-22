#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_GetFloatParam(py::module &m)
{
    py::class_< UBehavior_GetFloatParam,  UParameterBehaviorBase   >(m, "UBehavior_GetFloatParam")
        .def("StaticClass", &UBehavior_GetFloatParam::StaticClass, py::return_value_policy::reference)
        .def("PublishBehaviorOutput", &UBehavior_GetFloatParam::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_GetFloatParam::ApplyBehaviorToContext)
          ;
}