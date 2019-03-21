#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ASplineLoftActorMovable()
{
    class_< ASplineLoftActorMovable, bases< ASplineLoftActor >  , boost::noncopyable>("ASplineLoftActorMovable", no_init)
        .def("StaticClass", &ASplineLoftActorMovable::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}