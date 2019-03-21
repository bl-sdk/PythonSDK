#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_Skill()
{
    py::class_< UWillowDmgSource_Skill,  UWillowDamageSource   >("UWillowDmgSource_Skill")
        .def("StaticClass", &UWillowDmgSource_Skill::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}