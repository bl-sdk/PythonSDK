#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ANxTornadoForceFieldCapsule()
{
    class_< ANxTornadoForceFieldCapsule, bases< ANxTornadoForceField >  , boost::noncopyable>("ANxTornadoForceFieldCapsule", no_init)
        .def_readwrite("RenderComponent", &ANxTornadoForceFieldCapsule::RenderComponent)
        .def("StaticClass", &ANxTornadoForceFieldCapsule::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}