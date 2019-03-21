#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetVectorParam(py::object m)
{
    py::class_< UBehavior_SetVectorParam,  UParameterBehaviorBase   >(m, "UBehavior_SetVectorParam")
        .def_readwrite("RValue", &UBehavior_SetVectorParam::RValue)
        .def_readwrite("GValue", &UBehavior_SetVectorParam::GValue)
        .def_readwrite("bValue", &UBehavior_SetVectorParam::bValue)
        .def_readwrite("AValue", &UBehavior_SetVectorParam::AValue)
        .def("StaticClass", &UBehavior_SetVectorParam::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetVectorParam::ApplyBehaviorToContext)
          ;
}