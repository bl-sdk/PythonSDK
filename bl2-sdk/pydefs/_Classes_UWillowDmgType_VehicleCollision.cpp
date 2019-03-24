#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDmgType_VehicleCollision(py::module &m)
{
    py::class_< UWillowDmgType_VehicleCollision,  UWillowDamageType   >(m, "UWillowDmgType_VehicleCollision")
		.def_static("StaticClass", &UWillowDmgType_VehicleCollision::StaticClass, py::return_value_policy::reference)
          ;
}