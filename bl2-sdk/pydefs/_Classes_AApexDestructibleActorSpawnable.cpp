#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AApexDestructibleActorSpawnable()
{
    class_< AApexDestructibleActorSpawnable, bases< AApexDestructibleActor >  , boost::noncopyable>("AApexDestructibleActorSpawnable", no_init)
        .def("StaticClass", &AApexDestructibleActorSpawnable::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}