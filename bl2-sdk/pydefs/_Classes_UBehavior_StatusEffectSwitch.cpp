#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_StatusEffectSwitch(py::module &m)
{
    py::class_< UBehavior_StatusEffectSwitch,  UBehaviorBase   >(m, "UBehavior_StatusEffectSwitch")
        .def_readwrite("StatusEffectType", &UBehavior_StatusEffectSwitch::StatusEffectType)
        .def("ApplyBehaviorToContext", &UBehavior_StatusEffectSwitch::ApplyBehaviorToContext)
          ;
}