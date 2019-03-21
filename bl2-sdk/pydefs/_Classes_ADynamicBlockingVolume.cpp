#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ADynamicBlockingVolume()
{
    class_< ADynamicBlockingVolume, bases< ABlockingVolume >  , boost::noncopyable>("ADynamicBlockingVolume", no_init)
        .def("StaticClass", &ADynamicBlockingVolume::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyCheckpointRecord", &ADynamicBlockingVolume::ApplyCheckpointRecord)
        .def("CreateCheckpointRecord", &ADynamicBlockingVolume::CreateCheckpointRecord)
        .def("eventPostBeginPlay", &ADynamicBlockingVolume::eventPostBeginPlay)
        .staticmethod("StaticClass")
  ;
}