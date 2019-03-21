#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UProjectileBehavior_SetStickyGrenade()
{
    py::class_< UProjectileBehavior_SetStickyGrenade,  UProjectileBehaviorBase   >("UProjectileBehavior_SetStickyGrenade")
        .def("StaticClass", &UProjectileBehavior_SetStickyGrenade::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UProjectileBehavior_SetStickyGrenade::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}