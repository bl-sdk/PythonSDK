#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ARB_PrismaticActor()
{
    class_< ARB_PrismaticActor, bases< ARB_ConstraintActor >  , boost::noncopyable>("ARB_PrismaticActor", no_init)
        .def("StaticClass", &ARB_PrismaticActor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}