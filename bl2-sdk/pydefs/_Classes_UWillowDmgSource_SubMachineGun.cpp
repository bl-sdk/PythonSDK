#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_SubMachineGun()
{
    py::class_< UWillowDmgSource_SubMachineGun,  UWillowDmgSource_Bullet   >("UWillowDmgSource_SubMachineGun")
        .def("StaticClass", &UWillowDmgSource_SubMachineGun::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}