#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AStaticLightCollectionActor()
{
    class_< AStaticLightCollectionActor, bases< ALight >  , boost::noncopyable>("AStaticLightCollectionActor", no_init)
        .def_readwrite("LightComponents", &AStaticLightCollectionActor::LightComponents)
        .def_readwrite("MaxLightComponents", &AStaticLightCollectionActor::MaxLightComponents)
        .def("StaticClass", &AStaticLightCollectionActor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}