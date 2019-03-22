#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_VehicleSpawned(py::module &m)
{
    py::class_< UWillowSeqEvent_VehicleSpawned,  USequenceEvent   >(m, "UWillowSeqEvent_VehicleSpawned")
        .def_readwrite("SpawnedVehicle", &UWillowSeqEvent_VehicleSpawned::SpawnedVehicle)
          ;
}