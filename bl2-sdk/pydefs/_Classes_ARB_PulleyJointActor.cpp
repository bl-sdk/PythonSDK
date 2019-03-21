#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ARB_PulleyJointActor()
{
    class_< ARB_PulleyJointActor, bases< ARB_ConstraintActor >  , boost::noncopyable>("ARB_PulleyJointActor", no_init)
        .def("StaticClass", &ARB_PulleyJointActor::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}