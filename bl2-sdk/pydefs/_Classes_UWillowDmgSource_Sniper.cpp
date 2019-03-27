#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_Sniper(py::module &m)
{
    py::class_< UWillowDmgSource_Sniper,  UWillowDmgSource_Bullet   >(m, "UWillowDmgSource_Sniper")
		.def_static("StaticClass", &UWillowDmgSource_Sniper::StaticClass, py::return_value_policy::reference)
          ;
}