#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeCollisionSize()
{
    py::class_< UBehavior_ChangeCollisionSize,  UBehaviorBase   >("UBehavior_ChangeCollisionSize")
        .def_readwrite("Radius", &UBehavior_ChangeCollisionSize::Radius)
        .def_readwrite("Height", &UBehavior_ChangeCollisionSize::Height)
        .def("StaticClass", &UBehavior_ChangeCollisionSize::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeCollisionSize::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}