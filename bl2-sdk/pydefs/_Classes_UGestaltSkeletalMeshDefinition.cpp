#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGestaltSkeletalMeshDefinition()
{
    class_< UGestaltSkeletalMeshDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UGestaltSkeletalMeshDefinition", no_init)
        .def_readwrite("GestaltSkeletalMesh", &UGestaltSkeletalMeshDefinition::GestaltSkeletalMesh)
        .def_readwrite("GestaltInfos", &UGestaltSkeletalMeshDefinition::GestaltInfos)
        .def_readwrite("GestaltAccessoryNames", &UGestaltSkeletalMeshDefinition::GestaltAccessoryNames)
        .def_readwrite("GestaltSocketMappings", &UGestaltSkeletalMeshDefinition::GestaltSocketMappings)
        .def_readwrite("GestaltPartBounds", &UGestaltSkeletalMeshDefinition::GestaltPartBounds)
        .def("StaticClass", &UGestaltSkeletalMeshDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("InitGestaltAccessoryMeshDataFromParts", &UGestaltSkeletalMeshDefinition::InitGestaltAccessoryMeshDataFromParts)
        .def("InitGestaltMeshDataFromParts", &UGestaltSkeletalMeshDefinition::InitGestaltMeshDataFromParts)
        .staticmethod("StaticClass")
  ;
}