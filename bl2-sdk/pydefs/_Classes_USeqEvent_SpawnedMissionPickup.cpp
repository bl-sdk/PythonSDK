#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_SpawnedMissionPickup(py::module &m)
{
    py::class_< USeqEvent_SpawnedMissionPickup,  USequenceEvent   >(m, "USeqEvent_SpawnedMissionPickup")
		.def_static("StaticClass", &USeqEvent_SpawnedMissionPickup::StaticClass, py::return_value_policy::reference)
          ;
}