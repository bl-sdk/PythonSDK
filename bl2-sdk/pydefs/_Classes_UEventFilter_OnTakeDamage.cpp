#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEventFilter_OnTakeDamage(py::module &m)
{
    py::class_< UEventFilter_OnTakeDamage,  UBehaviorEventFilterBase   >(m, "UEventFilter_OnTakeDamage")
		.def_static("StaticClass", &UEventFilter_OnTakeDamage::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DamageThreshold", &UEventFilter_OnTakeDamage::DamageThreshold)
          ;
}