#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetExtraImpactEffect(py::module &m)
{
    py::class_< UBehavior_SetExtraImpactEffect,  UBehaviorBase   >(m, "UBehavior_SetExtraImpactEffect")
		.def_static("StaticClass", &UBehavior_SetExtraImpactEffect::StaticClass, py::return_value_policy::reference)
        .def_readwrite("BulletFromClip", &UBehavior_SetExtraImpactEffect::BulletFromClip)
        .def_readwrite("ImpactDefinition", &UBehavior_SetExtraImpactEffect::ImpactDefinition)
        .def("ApplyBehaviorToContext", &UBehavior_SetExtraImpactEffect::ApplyBehaviorToContext)
          ;
}