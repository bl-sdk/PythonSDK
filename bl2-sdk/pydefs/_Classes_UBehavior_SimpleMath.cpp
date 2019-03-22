#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SimpleMath(py::module &m)
{
    py::class_< UBehavior_SimpleMath,  UBehaviorBase   >(m, "UBehavior_SimpleMath")
        .def_readwrite("A", &UBehavior_SimpleMath::A)
        .def_readwrite("B", &UBehavior_SimpleMath::B)
        .def_readwrite("Operation", &UBehavior_SimpleMath::Operation)
        .def("eventPublishBehaviorOutput", &UBehavior_SimpleMath::eventPublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_SimpleMath::ApplyBehaviorToContext)
          ;
}