#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_DisableFallingDamage()
{
    py::class_< UBehavior_DisableFallingDamage,  UBehaviorBase   >("UBehavior_DisableFallingDamage")
        .def("StaticClass", &UBehavior_DisableFallingDamage::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_DisableFallingDamage::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}