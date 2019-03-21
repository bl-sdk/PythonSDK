#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ASkeletalMeshActorBasedOnExtremeContent()
{
    class_< ASkeletalMeshActorBasedOnExtremeContent, bases< ASkeletalMeshActor >  , boost::noncopyable>("ASkeletalMeshActorBasedOnExtremeContent", no_init)
        .def_readwrite("ExtremeContent", &ASkeletalMeshActorBasedOnExtremeContent::ExtremeContent)
        .def_readwrite("NonExtremeContent", &ASkeletalMeshActorBasedOnExtremeContent::NonExtremeContent)
        .def("StaticClass", &ASkeletalMeshActorBasedOnExtremeContent::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetMaterialBasedOnExtremeContent", &ASkeletalMeshActorBasedOnExtremeContent::SetMaterialBasedOnExtremeContent)
        .def("eventPostBeginPlay", &ASkeletalMeshActorBasedOnExtremeContent::eventPostBeginPlay)
        .staticmethod("StaticClass")
  ;
}