#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_Rocket()
{
    py::class_< UWillowDmgSource_Rocket,  UWillowDamageSource   >("UWillowDmgSource_Rocket")
        .def("StaticClass", &UWillowDmgSource_Rocket::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}