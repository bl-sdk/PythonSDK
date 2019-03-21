#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxStaticMeshComponent()
{
    class_< UGearboxStaticMeshComponent, bases< UStaticMeshComponent >  , boost::noncopyable>("UGearboxStaticMeshComponent", no_init)
        .def_readwrite("FOV", &UGearboxStaticMeshComponent::FOV)
        .def("StaticClass", &UGearboxStaticMeshComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}