#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULevelGridVolumeRenderingComponent()
{
    class_< ULevelGridVolumeRenderingComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("ULevelGridVolumeRenderingComponent", no_init)
        .def("StaticClass", &ULevelGridVolumeRenderingComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}