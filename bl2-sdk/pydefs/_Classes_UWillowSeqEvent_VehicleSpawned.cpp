#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqEvent_VehicleSpawned()
{
    py::class_< UWillowSeqEvent_VehicleSpawned,  USequenceEvent   >("UWillowSeqEvent_VehicleSpawned")
        .def_readwrite("SpawnedVehicle", &UWillowSeqEvent_VehicleSpawned::SpawnedVehicle)
        .def("StaticClass", &UWillowSeqEvent_VehicleSpawned::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}