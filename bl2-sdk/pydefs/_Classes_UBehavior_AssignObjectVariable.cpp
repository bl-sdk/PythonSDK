#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AssignObjectVariable(py::module &m)
{
    py::class_< UBehavior_AssignObjectVariable,  UBehaviorBase   >(m, "UBehavior_AssignObjectVariable")
        .def_readwrite("Value", &UBehavior_AssignObjectVariable::Value)
        .def("PublishBehaviorOutput", &UBehavior_AssignObjectVariable::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_AssignObjectVariable::ApplyBehaviorToContext)
          ;
}