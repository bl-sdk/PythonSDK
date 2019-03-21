#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEventFilter_OnTakeDamage()
{
    py::class_< UEventFilter_OnTakeDamage,  UBehaviorEventFilterBase   >("UEventFilter_OnTakeDamage")
        .def_readwrite("DamageThreshold", &UEventFilter_OnTakeDamage::DamageThreshold)
        .def("StaticClass", &UEventFilter_OnTakeDamage::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}