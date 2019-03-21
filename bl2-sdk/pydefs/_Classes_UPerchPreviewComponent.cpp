#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPerchPreviewComponent()
{
    class_< UPerchPreviewComponent, bases< USkeletalMeshComponent >  , boost::noncopyable>("UPerchPreviewComponent", no_init)
        .def_readwrite("PerchDef", &UPerchPreviewComponent::PerchDef)
        .def_readwrite("CurrentPawn", &UWillowPreviewComponent::CurrentPawn)
        .def("StaticClass", &UPerchPreviewComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}