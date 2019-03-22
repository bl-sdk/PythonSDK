#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_MakeVector(py::module &m)
{
    py::class_< UBehavior_MakeVector,  UBehaviorBase   >(m, "UBehavior_MakeVector")
        .def_readwrite("X", &UBehavior_MakeVector::X)
        .def_readwrite("Y", &UBehavior_MakeVector::Y)
        .def_readwrite("Z", &UBehavior_MakeVector::Z)
        .def("eventPublishBehaviorOutput", &UBehavior_MakeVector::eventPublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_MakeVector::ApplyBehaviorToContext)
          ;
}