#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_IntMath(py::module &m)
{
    py::class_< UBehavior_IntMath,  UBehaviorBase   >(m, "UBehavior_IntMath")
        .def_readwrite("A", &UBehavior_IntMath::A)
        .def_readwrite("B", &UBehavior_IntMath::B)
        .def_readwrite("Operation", &UBehavior_IntMath::Operation)
        .def("eventPublishBehaviorOutput", &UBehavior_IntMath::eventPublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_IntMath::ApplyBehaviorToContext)
          ;
}