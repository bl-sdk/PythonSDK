#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URB_BSJointSetup()
{
    class_< URB_BSJointSetup, bases< URB_ConstraintSetup >  , boost::noncopyable>("URB_BSJointSetup", no_init)
        .def("StaticClass", &URB_BSJointSetup::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}