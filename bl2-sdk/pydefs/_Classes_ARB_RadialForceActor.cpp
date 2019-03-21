#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ARB_RadialForceActor()
{
    class_< ARB_RadialForceActor, bases< AActor >  , boost::noncopyable>("ARB_RadialForceActor", no_init)
        .def_readwrite("RenderComponent", &ARB_RadialForceActor::RenderComponent)
        .def_readwrite("ForceStrength", &ARB_RadialForceActor::ForceStrength)
        .def_readwrite("ForceRadius", &ARB_RadialForceActor::ForceRadius)
        .def_readwrite("SwirlStrength", &ARB_RadialForceActor::SwirlStrength)
        .def_readwrite("SpinTorque", &ARB_RadialForceActor::SpinTorque)
        .def_readwrite("ForceFalloff", &ARB_RadialForceActor::ForceFalloff)
        .def_readwrite("RadialForceMode", &ARB_RadialForceActor::RadialForceMode)
        .def_readwrite("CollideWithChannels", &ARB_RadialForceActor::CollideWithChannels)
        .def("StaticClass", &ARB_RadialForceActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnToggle", &ARB_RadialForceActor::OnToggle)
        .staticmethod("StaticClass")
  ;
}