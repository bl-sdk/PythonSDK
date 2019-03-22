#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetShieldDamageResistanceType(py::module &m)
{
    py::class_< UBehavior_SetShieldDamageResistanceType,  UBehaviorBase   >(m, "UBehavior_SetShieldDamageResistanceType")
        .def_readwrite("DamageResistanceType", &UBehavior_SetShieldDamageResistanceType::DamageResistanceType)
        .def("StaticClass", &UBehavior_SetShieldDamageResistanceType::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetShieldDamageResistanceType::ApplyBehaviorToContext)
          ;
}