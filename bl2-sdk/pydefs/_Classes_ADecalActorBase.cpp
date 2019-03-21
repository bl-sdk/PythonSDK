#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ADecalActorBase()
{
    class_< ADecalActorBase, bases< AActor >  , boost::noncopyable>("ADecalActorBase", no_init)
        .def_readwrite("Decal", &ADecalActorBase::Decal)
        .def("StaticClass", &ADecalActorBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}