#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ANxTornadoAngularForceFieldCapsule()
{
    class_< ANxTornadoAngularForceFieldCapsule, bases< ANxTornadoAngularForceField >  , boost::noncopyable>("ANxTornadoAngularForceFieldCapsule", no_init)
        .def_readwrite("RenderComponent", &ANxTornadoAngularForceFieldCapsule::RenderComponent)
        .def("StaticClass", &ANxTornadoAngularForceFieldCapsule::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}