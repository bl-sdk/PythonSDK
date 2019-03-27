#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_Grenade(py::module &m)
{
    py::class_< UWillowDmgSource_Grenade,  UWillowDamageSource   >(m, "UWillowDmgSource_Grenade")
		.def_static("StaticClass", &UWillowDmgSource_Grenade::StaticClass, py::return_value_policy::reference)
          ;
}