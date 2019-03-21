#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AStaticMeshActorBasedOnExtremeContent()
{
    class_< AStaticMeshActorBasedOnExtremeContent, bases< AActor >  , boost::noncopyable>("AStaticMeshActorBasedOnExtremeContent", no_init)
        .def_readwrite("StaticMeshComponent", &AStaticMeshActorBasedOnExtremeContent::StaticMeshComponent)
        .def_readwrite("ExtremeContent", &AStaticMeshActorBasedOnExtremeContent::ExtremeContent)
        .def_readwrite("NonExtremeContent", &AStaticMeshActorBasedOnExtremeContent::NonExtremeContent)
        .def("StaticClass", &AStaticMeshActorBasedOnExtremeContent::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetMaterialBasedOnExtremeContent", &AStaticMeshActorBasedOnExtremeContent::SetMaterialBasedOnExtremeContent)
        .def("eventPostBeginPlay", &AStaticMeshActorBasedOnExtremeContent::eventPostBeginPlay)
        .staticmethod("StaticClass")
  ;
}