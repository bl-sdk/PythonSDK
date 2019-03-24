#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_StatusEffect(py::module &m)
{
    py::class_< UWillowDmgSource_StatusEffect,  UWillowDamageSource   >(m, "UWillowDmgSource_StatusEffect")
		.def_static("StaticClass", &UWillowDmgSource_StatusEffect::StaticClass, py::return_value_policy::reference)
          ;
}