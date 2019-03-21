#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_ShieldSpike()
{
    py::class_< UWillowDmgSource_ShieldSpike,  UWillowDamageSource   >("UWillowDmgSource_ShieldSpike")
        .def("StaticClass", &UWillowDmgSource_ShieldSpike::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}