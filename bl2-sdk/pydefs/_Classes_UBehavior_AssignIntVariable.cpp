#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AssignIntVariable(py::module &m)
{
    py::class_< UBehavior_AssignIntVariable,  UBehaviorBase   >(m, "UBehavior_AssignIntVariable")
		.def_static("StaticClass", &UBehavior_AssignIntVariable::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Value", &UBehavior_AssignIntVariable::Value)
        .def("PublishBehaviorOutput", &UBehavior_AssignIntVariable::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_AssignIntVariable::ApplyBehaviorToContext)
          ;
}