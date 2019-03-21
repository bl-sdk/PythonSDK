#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGestaltDataContainer()
{
    py::class_< FGestaltDataContainer >("FGestaltDataContainer")
        .def_readwrite("SkeletalMesh", &FGestaltDataContainer::SkeletalMesh)
        .def_readwrite("LODModelData", &FGestaltDataContainer::LODModelData)
        .def_readwrite("SocketMappings", &FGestaltDataContainer::SocketMappings)
        .def_readwrite("GestaltAccessoryList", &FGestaltDataContainer::GestaltAccessoryList)
        .def_readwrite("GestaltPartMatricesContainer", &FGestaltDataContainer::GestaltPartMatricesContainer)
        .def_readwrite("ReferencePoseBounds", &FGestaltDataContainer::ReferencePoseBounds)
  ;
}