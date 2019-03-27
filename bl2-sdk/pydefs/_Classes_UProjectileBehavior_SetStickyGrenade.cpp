#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UProjectileBehavior_SetStickyGrenade(py::module &m)
{
    py::class_< UProjectileBehavior_SetStickyGrenade,  UProjectileBehaviorBase   >(m, "UProjectileBehavior_SetStickyGrenade")
		.def_static("StaticClass", &UProjectileBehavior_SetStickyGrenade::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UProjectileBehavior_SetStickyGrenade::ApplyBehaviorToContext)
          ;
}