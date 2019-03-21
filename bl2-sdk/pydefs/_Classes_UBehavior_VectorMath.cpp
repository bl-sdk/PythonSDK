#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_VectorMath()
{
    py::class_< UBehavior_VectorMath,  UBehaviorBase   >("UBehavior_VectorMath")
        .def_readwrite("A", &UBehavior_VectorMath::A)
        .def_readwrite("B", &UBehavior_VectorMath::B)
        .def_readwrite("Operation", &UBehavior_VectorMath::Operation)
        .def("StaticClass", &UBehavior_VectorMath::StaticClass, py::return_value_policy::reference)
        .def("eventPublishBehaviorOutput", &UBehavior_VectorMath::eventPublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_VectorMath::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}