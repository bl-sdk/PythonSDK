#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URB_StayUprightSetup()
{
    class_< URB_StayUprightSetup, bases< URB_ConstraintSetup >  , boost::noncopyable>("URB_StayUprightSetup", no_init)
        .def("StaticClass", &URB_StayUprightSetup::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}