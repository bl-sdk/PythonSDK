#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AEnvironmentVolume()
{
    class_< AEnvironmentVolume, bases< AVolume >  , boost::noncopyable>("AEnvironmentVolume", no_init)
        .def_readwrite("VfTable_IInterface_NavMeshPathObstacle", &AEnvironmentVolume::VfTable_IInterface_NavMeshPathObstacle)
        .def_readwrite("VfTable_IInterface_NavMeshPathObject", &AEnvironmentVolume::VfTable_IInterface_NavMeshPathObject)
        .def("StaticClass", &AEnvironmentVolume::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetSplitNavMesh", &AEnvironmentVolume::SetSplitNavMesh)
        .staticmethod("StaticClass")
  ;
}