#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ADecalActorMovable()
{
    class_< ADecalActorMovable, bases< AActor >  , boost::noncopyable>("ADecalActorMovable", no_init)
        .def_readwrite("Decal", &ADecalActorBase::Decal)
        .def("StaticClass", &ADecalActorMovable::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}