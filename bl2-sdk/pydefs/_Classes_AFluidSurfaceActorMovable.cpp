#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AFluidSurfaceActorMovable()
{
    class_< AFluidSurfaceActorMovable, bases< AFluidSurfaceActor >  , boost::noncopyable>("AFluidSurfaceActorMovable", no_init)
        .def("StaticClass", &AFluidSurfaceActorMovable::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}