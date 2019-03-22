#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowVehicle_Turret(py::module &m)
{
    py::class_< AWillowVehicle_Turret,  AWillowVehicle   >(m, "AWillowVehicle_Turret")
          ;
}