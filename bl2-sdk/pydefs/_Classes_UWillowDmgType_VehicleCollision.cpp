#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgType_VehicleCollision()
{
    py::class_< UWillowDmgType_VehicleCollision,  UWillowDamageType   >("UWillowDmgType_VehicleCollision")
        .def("StaticClass", &UWillowDmgType_VehicleCollision::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}