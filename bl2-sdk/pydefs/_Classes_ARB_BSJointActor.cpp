#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ARB_BSJointActor()
{
    class_< ARB_BSJointActor, bases< ARB_ConstraintActor >  , boost::noncopyable>("ARB_BSJointActor", no_init)
        .def("StaticClass", &ARB_BSJointActor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}