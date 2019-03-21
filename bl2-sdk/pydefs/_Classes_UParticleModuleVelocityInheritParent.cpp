#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleVelocityInheritParent()
{
    class_< UParticleModuleVelocityInheritParent, bases< UParticleModuleVelocityBase >  , boost::noncopyable>("UParticleModuleVelocityInheritParent", no_init)
        .def_readwrite("Scale", &UParticleModuleVelocityInheritParent::Scale)
        .def("StaticClass", &UParticleModuleVelocityInheritParent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}