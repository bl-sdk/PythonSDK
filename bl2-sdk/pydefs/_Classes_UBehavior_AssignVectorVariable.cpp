#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AssignVectorVariable(py::object m)
{
    py::class_< UBehavior_AssignVectorVariable,  UBehaviorBase   >(m, "UBehavior_AssignVectorVariable")
        .def_readwrite("Value", &UBehavior_AssignVectorVariable::Value)
        .def("StaticClass", &UBehavior_AssignVectorVariable::StaticClass, py::return_value_policy::reference)
        .def("PublishBehaviorOutput", &UBehavior_AssignVectorVariable::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_AssignVectorVariable::ApplyBehaviorToContext)
          ;
}