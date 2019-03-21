#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADynamicBlockingVolume()
{
    py::class_< ADynamicBlockingVolume,  ABlockingVolume   >("ADynamicBlockingVolume")
        .def("StaticClass", &ADynamicBlockingVolume::StaticClass, py::return_value_policy::reference)
        .def("ApplyCheckpointRecord", &ADynamicBlockingVolume::ApplyCheckpointRecord)
        .def("CreateCheckpointRecord", &ADynamicBlockingVolume::CreateCheckpointRecord)
        .def("eventPostBeginPlay", &ADynamicBlockingVolume::eventPostBeginPlay)
        .staticmethod("StaticClass")
  ;
}