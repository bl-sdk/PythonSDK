#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEventFilter_OnTakeDamage(py::module &m)
{
    py::class_< UEventFilter_OnTakeDamage,  UBehaviorEventFilterBase   >(m, "UEventFilter_OnTakeDamage")
        .def_readwrite("DamageThreshold", &UEventFilter_OnTakeDamage::DamageThreshold)
          ;
}