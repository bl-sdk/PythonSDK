#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetObjectParam(py::module &m)
{
    py::class_< UBehavior_SetObjectParam,  UParameterBehaviorBase   >(m, "UBehavior_SetObjectParam")
        .def_readwrite("Value", &UBehavior_SetObjectParam::Value)
        .def("ApplyBehaviorToContext", &UBehavior_SetObjectParam::ApplyBehaviorToContext)
          ;
}