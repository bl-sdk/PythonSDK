#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetExtraImpactEffect()
{
    py::class_< UBehavior_SetExtraImpactEffect,  UBehaviorBase   >("UBehavior_SetExtraImpactEffect")
        .def_readwrite("BulletFromClip", &UBehavior_SetExtraImpactEffect::BulletFromClip)
        .def_readwrite("ImpactDefinition", &UBehavior_SetExtraImpactEffect::ImpactDefinition)
        .def("StaticClass", &UBehavior_SetExtraImpactEffect::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetExtraImpactEffect::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}