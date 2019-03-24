#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_ShieldSpike(py::module &m)
{
    py::class_< UWillowDmgSource_ShieldSpike,  UWillowDamageSource   >(m, "UWillowDmgSource_ShieldSpike")
		.def_static("StaticClass", &UWillowDmgSource_ShieldSpike::StaticClass, py::return_value_policy::reference)
          ;
}