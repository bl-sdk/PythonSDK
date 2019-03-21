#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AssignFloatVariable(py::object m)
{
    py::class_< UBehavior_AssignFloatVariable,  UBehaviorBase   >(m, "UBehavior_AssignFloatVariable")
        .def_readwrite("Value", &UBehavior_AssignFloatVariable::Value)
        .def("StaticClass", &UBehavior_AssignFloatVariable::StaticClass, py::return_value_policy::reference)
        .def("PublishBehaviorOutput", &UBehavior_AssignFloatVariable::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_AssignFloatVariable::ApplyBehaviorToContext)
          ;
}