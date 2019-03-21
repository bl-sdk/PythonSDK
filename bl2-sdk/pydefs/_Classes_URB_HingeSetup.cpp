#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URB_HingeSetup()
{
    class_< URB_HingeSetup, bases< URB_ConstraintSetup >  , boost::noncopyable>("URB_HingeSetup", no_init)
        .def("StaticClass", &URB_HingeSetup::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}