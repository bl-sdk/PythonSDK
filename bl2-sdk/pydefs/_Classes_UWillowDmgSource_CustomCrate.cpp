#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_CustomCrate()
{
    py::class_< UWillowDmgSource_CustomCrate,  UWillowDamageSource   >("UWillowDmgSource_CustomCrate")
        .def("StaticClass", &UWillowDmgSource_CustomCrate::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}