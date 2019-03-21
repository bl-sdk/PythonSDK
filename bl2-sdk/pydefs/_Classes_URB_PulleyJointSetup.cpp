#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URB_PulleyJointSetup()
{
    class_< URB_PulleyJointSetup, bases< URB_ConstraintSetup >  , boost::noncopyable>("URB_PulleyJointSetup", no_init)
        .def("StaticClass", &URB_PulleyJointSetup::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}