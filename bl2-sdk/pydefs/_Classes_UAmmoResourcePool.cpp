#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAmmoResourcePool()
{
    py::class_< UAmmoResourcePool,  UResourcePool   >("UAmmoResourcePool")
        .def("StaticClass", &UAmmoResourcePool::StaticClass, py::return_value_policy::reference)
        .def("GetDebugText", &UAmmoResourcePool::GetDebugText)
        .def("GetExtraAmmoRegen", &UAmmoResourcePool::GetExtraAmmoRegen)
        .staticmethod("StaticClass")
  ;
}