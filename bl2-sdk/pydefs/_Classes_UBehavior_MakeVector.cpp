#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_MakeVector(py::object m)
{
    py::class_< UBehavior_MakeVector,  UBehaviorBase   >(m, "UBehavior_MakeVector")
        .def_readwrite("X", &UBehavior_MakeVector::X)
        .def_readwrite("Y", &UBehavior_MakeVector::Y)
        .def_readwrite("Z", &UBehavior_MakeVector::Z)
        .def("StaticClass", &UBehavior_MakeVector::StaticClass, py::return_value_policy::reference)
        .def("eventPublishBehaviorOutput", &UBehavior_MakeVector::eventPublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_MakeVector::ApplyBehaviorToContext)
          ;
}