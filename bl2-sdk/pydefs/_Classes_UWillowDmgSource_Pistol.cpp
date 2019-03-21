#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_Pistol()
{
    py::class_< UWillowDmgSource_Pistol,  UWillowDmgSource_Bullet   >("UWillowDmgSource_Pistol")
        .def("StaticClass", &UWillowDmgSource_Pistol::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}