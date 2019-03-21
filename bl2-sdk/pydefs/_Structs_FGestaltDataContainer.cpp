#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGestaltDataContainer()
{
    class_< FGestaltDataContainer >("FGestaltDataContainer", no_init)
        .def_readwrite("SkeletalMesh", &FGestaltDataContainer::SkeletalMesh)
        .def_readwrite("LODModelData", &FGestaltDataContainer::LODModelData)
        .def_readwrite("SocketMappings", &FGestaltDataContainer::SocketMappings)
        .def_readwrite("GestaltAccessoryList", &FGestaltDataContainer::GestaltAccessoryList)
        .def_readwrite("GestaltPartMatricesContainer", &FGestaltDataContainer::GestaltPartMatricesContainer)
        .def_readwrite("ReferencePoseBounds", &FGestaltDataContainer::ReferencePoseBounds)
  ;
}