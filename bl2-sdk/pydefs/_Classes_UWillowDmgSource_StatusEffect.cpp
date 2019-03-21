#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_StatusEffect()
{
    py::class_< UWillowDmgSource_StatusEffect,  UWillowDamageSource   >("UWillowDmgSource_StatusEffect")
        .def("StaticClass", &UWillowDmgSource_StatusEffect::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}