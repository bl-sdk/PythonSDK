#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ARB_ConstraintActorSpawnable()
{
    class_< ARB_ConstraintActorSpawnable, bases< ARB_ConstraintActor >  , boost::noncopyable>("ARB_ConstraintActorSpawnable", no_init)
        .def("StaticClass", &ARB_ConstraintActorSpawnable::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}