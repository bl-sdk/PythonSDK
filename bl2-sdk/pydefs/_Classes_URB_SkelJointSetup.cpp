#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URB_SkelJointSetup()
{
    class_< URB_SkelJointSetup, bases< URB_ConstraintSetup >  , boost::noncopyable>("URB_SkelJointSetup", no_init)
        .def("StaticClass", &URB_SkelJointSetup::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}