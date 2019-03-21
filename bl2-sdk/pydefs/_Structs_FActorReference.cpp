#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FActorReference()
{
    class_< FActorReference >("FActorReference", no_init)
        .def_readwrite("Actor", &FActorReference::Actor)
        .def_readwrite("Guid", &FActorReference::Guid)
  ;
}