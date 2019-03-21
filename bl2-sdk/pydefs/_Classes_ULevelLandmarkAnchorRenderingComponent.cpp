#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULevelLandmarkAnchorRenderingComponent()
{
    class_< ULevelLandmarkAnchorRenderingComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("ULevelLandmarkAnchorRenderingComponent", no_init)
        .def("StaticClass", &ULevelLandmarkAnchorRenderingComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}