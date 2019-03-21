#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_PackAttack()
{
    py::class_< UBehavior_PackAttack,  UBehaviorBase   >("UBehavior_PackAttack")
        .def("StaticClass", &UBehavior_PackAttack::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}