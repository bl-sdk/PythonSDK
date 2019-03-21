#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URB_DistanceJointSetup()
{
    class_< URB_DistanceJointSetup, bases< URB_ConstraintSetup >  , boost::noncopyable>("URB_DistanceJointSetup", no_init)
        .def("StaticClass", &URB_DistanceJointSetup::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}