#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UProjectileBehavior_SetStickyGrenade(py::object m)
{
    py::class_< UProjectileBehavior_SetStickyGrenade,  UProjectileBehaviorBase   >(m, "UProjectileBehavior_SetStickyGrenade")
        .def("StaticClass", &UProjectileBehavior_SetStickyGrenade::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UProjectileBehavior_SetStickyGrenade::ApplyBehaviorToContext)
          ;
}