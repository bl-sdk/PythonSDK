#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWwiseSoundGroupRenderingComponent()
{
    class_< UWwiseSoundGroupRenderingComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UWwiseSoundGroupRenderingComponent", no_init)
        .def("StaticClass", &UWwiseSoundGroupRenderingComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}