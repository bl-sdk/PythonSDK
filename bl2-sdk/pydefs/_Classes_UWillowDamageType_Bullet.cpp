#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDamageType_Bullet()
{
    py::class_< UWillowDamageType_Bullet,  UWillowDamageType   >("UWillowDamageType_Bullet")
        .def("StaticClass", &UWillowDamageType_Bullet::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}