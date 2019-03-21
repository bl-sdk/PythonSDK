#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_Shield()
{
    py::class_< UWillowDmgSource_Shield,  UWillowDamageSource   >("UWillowDmgSource_Shield")
        .def("StaticClass", &UWillowDmgSource_Shield::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}