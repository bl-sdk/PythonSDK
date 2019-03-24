#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UProjectileBehavior_SetHomingTarget(py::module &m)
{
    py::class_< UProjectileBehavior_SetHomingTarget,  UProjectileBehaviorBase   >(m, "UProjectileBehavior_SetHomingTarget")
		.def_static("StaticClass", &UProjectileBehavior_SetHomingTarget::StaticClass, py::return_value_policy::reference)
        .def_readwrite("AssignedTarget", &UProjectileBehavior_SetHomingTarget::AssignedTarget)
        .def("ApplyBehaviorToContext", &UProjectileBehavior_SetHomingTarget::ApplyBehaviorToContext)
          ;
}