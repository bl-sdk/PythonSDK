#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ADecalActor()
{
    class_< ADecalActor, bases< ADecalActorBase >  , boost::noncopyable>("ADecalActor", no_init)
        .def("StaticClass", &ADecalActor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}