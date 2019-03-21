#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ANxGenericForceFieldCapsule()
{
    class_< ANxGenericForceFieldCapsule, bases< ANxGenericForceField >  , boost::noncopyable>("ANxGenericForceFieldCapsule", no_init)
        .def_readwrite("RenderComponent", &ANxGenericForceFieldCapsule::RenderComponent)
        .def_readwrite("CapsuleHeight", &ANxGenericForceFieldCapsule::CapsuleHeight)
        .def_readwrite("CapsuleRadius", &ANxGenericForceFieldCapsule::CapsuleRadius)
        .def("StaticClass", &ANxGenericForceFieldCapsule::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}