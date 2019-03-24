#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SpawnFromVehicleSpawnStation(py::module &m)
{
    py::class_< UBehavior_SpawnFromVehicleSpawnStation,  UBehaviorBase   >(m, "UBehavior_SpawnFromVehicleSpawnStation")
		.def_static("StaticClass", &UBehavior_SpawnFromVehicleSpawnStation::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SpawnFromVehicleSpawnStation::ApplyBehaviorToContext)
          ;
}