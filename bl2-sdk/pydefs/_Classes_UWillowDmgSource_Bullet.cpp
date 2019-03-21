#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_Bullet()
{
    py::class_< UWillowDmgSource_Bullet,  UWillowDamageSource   >("UWillowDmgSource_Bullet")
        .def("StaticClass", &UWillowDmgSource_Bullet::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}