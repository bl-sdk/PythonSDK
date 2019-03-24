#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_Skill(py::module &m)
{
    py::class_< UWillowDmgSource_Skill,  UWillowDamageSource   >(m, "UWillowDmgSource_Skill")
		.def_static("StaticClass", &UWillowDmgSource_Skill::StaticClass, py::return_value_policy::reference)
          ;
}