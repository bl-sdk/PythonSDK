#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADynamicBlockingVolume(py::module &m)
{
    py::class_< ADynamicBlockingVolume,  ABlockingVolume   >(m, "ADynamicBlockingVolume")
        .def("ApplyCheckpointRecord", &ADynamicBlockingVolume::ApplyCheckpointRecord)
        .def("CreateCheckpointRecord", &ADynamicBlockingVolume::CreateCheckpointRecord)
        .def("eventPostBeginPlay", &ADynamicBlockingVolume::eventPostBeginPlay)
          ;
}