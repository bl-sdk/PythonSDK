#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_Sniper()
{
    py::class_< UWillowDmgSource_Sniper,  UWillowDmgSource_Bullet   >("UWillowDmgSource_Sniper")
        .def("StaticClass", &UWillowDmgSource_Sniper::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}