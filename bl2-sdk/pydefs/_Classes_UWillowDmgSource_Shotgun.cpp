#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_Shotgun()
{
    py::class_< UWillowDmgSource_Shotgun,  UWillowDmgSource_Bullet   >("UWillowDmgSource_Shotgun")
        .def("StaticClass", &UWillowDmgSource_Shotgun::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}