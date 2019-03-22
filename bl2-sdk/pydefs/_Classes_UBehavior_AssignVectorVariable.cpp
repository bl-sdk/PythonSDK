#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AssignVectorVariable(py::module &m)
{
    py::class_< UBehavior_AssignVectorVariable,  UBehaviorBase   >(m, "UBehavior_AssignVectorVariable")
        .def_readwrite("Value", &UBehavior_AssignVectorVariable::Value)
        .def("PublishBehaviorOutput", &UBehavior_AssignVectorVariable::PublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_AssignVectorVariable::ApplyBehaviorToContext)
          ;
}