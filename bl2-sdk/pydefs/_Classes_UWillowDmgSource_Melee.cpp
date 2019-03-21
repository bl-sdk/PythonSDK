#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_Melee()
{
    py::class_< UWillowDmgSource_Melee,  UWillowDamageSource   >("UWillowDmgSource_Melee")
        .def("StaticClass", &UWillowDmgSource_Melee::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}