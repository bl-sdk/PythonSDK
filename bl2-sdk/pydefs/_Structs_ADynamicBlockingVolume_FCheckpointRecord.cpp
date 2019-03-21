#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ADynamicBlockingVolume_FCheckpointRecord()
{
    class_< ADynamicBlockingVolume_FCheckpointRecord >("ADynamicBlockingVolume_FCheckpointRecord", no_init)
        .def_readwrite("Location", &ADynamicBlockingVolume_FCheckpointRecord::Location)
        .def_readwrite("Rotation", &ADynamicBlockingVolume_FCheckpointRecord::Rotation)
  ;
}