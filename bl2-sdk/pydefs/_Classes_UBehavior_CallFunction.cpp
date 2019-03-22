#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_CallFunction(py::module &m)
{
    py::class_< UBehavior_CallFunction,  UBehaviorBase   >(m, "UBehavior_CallFunction")
        .def_readwrite("FunctionName", &UBehavior_CallFunction::FunctionName)
        .def("CallFunction", &UBehavior_CallFunction::CallFunction)
        .def("ApplyBehaviorToContext", &UBehavior_CallFunction::ApplyBehaviorToContext)
          ;
}