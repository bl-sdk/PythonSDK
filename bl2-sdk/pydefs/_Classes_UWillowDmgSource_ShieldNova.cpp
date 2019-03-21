#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_ShieldNova()
{
    py::class_< UWillowDmgSource_ShieldNova,  UWillowDmgSource_Shield   >("UWillowDmgSource_ShieldNova")
        .def("StaticClass", &UWillowDmgSource_ShieldNova::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}