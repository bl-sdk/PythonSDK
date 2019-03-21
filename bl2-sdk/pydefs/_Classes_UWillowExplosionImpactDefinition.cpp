#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowExplosionImpactDefinition()
{
    class_< UWillowExplosionImpactDefinition, bases< UWillowImpactDefinition >  , boost::noncopyable>("UWillowExplosionImpactDefinition", no_init)
        .def("StaticClass", &UWillowExplosionImpactDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}