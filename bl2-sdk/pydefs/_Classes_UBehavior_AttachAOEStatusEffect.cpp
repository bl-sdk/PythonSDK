#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AttachAOEStatusEffect(py::object m)
{
    py::class_< UBehavior_AttachAOEStatusEffect,  UBehaviorBase   >(m, "UBehavior_AttachAOEStatusEffect")
        .def_readwrite("StatusEffectDamageType", &UBehavior_AttachAOEStatusEffect::StatusEffectDamageType)
        .def_readwrite("SaveReferenceName", &UBehavior_AttachAOEStatusEffect::SaveReferenceName)
        .def("StaticClass", &UBehavior_AttachAOEStatusEffect::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_AttachAOEStatusEffect::ApplyBehaviorToContext)
          ;
}