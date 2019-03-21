#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UImpactDefinition()
{
    class_< UImpactDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UImpactDefinition", no_init)
        .def("StaticClass", &UImpactDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("HandleRigidBodyImpact", &UImpactDefinition::HandleRigidBodyImpact)
        .staticmethod("StaticClass")
  ;
}