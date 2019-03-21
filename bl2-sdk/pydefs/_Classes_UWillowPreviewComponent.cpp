#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowPreviewComponent()
{
    class_< UWillowPreviewComponent, bases< USkeletalMeshComponent >  , boost::noncopyable>("UWillowPreviewComponent", no_init)
        .def_readwrite("CurrentPawn", &UWillowPreviewComponent::CurrentPawn)
        .def("StaticClass", &UWillowPreviewComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}