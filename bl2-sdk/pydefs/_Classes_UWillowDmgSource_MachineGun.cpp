#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_MachineGun()
{
    py::class_< UWillowDmgSource_MachineGun,  UWillowDmgSource_Bullet   >("UWillowDmgSource_MachineGun")
        .def("StaticClass", &UWillowDmgSource_MachineGun::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}