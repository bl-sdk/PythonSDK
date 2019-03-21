#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADynamicBlockingVolume_FCheckpointRecord(py::object m)
{
    py::class_< ADynamicBlockingVolume_FCheckpointRecord >(m, "ADynamicBlockingVolume_FCheckpointRecord")
        .def_readwrite("Location", &ADynamicBlockingVolume_FCheckpointRecord::Location)
        .def_readwrite("Rotation", &ADynamicBlockingVolume_FCheckpointRecord::Rotation)
  ;
}