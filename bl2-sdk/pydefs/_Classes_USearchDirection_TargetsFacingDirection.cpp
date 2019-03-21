#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USearchDirection_TargetsFacingDirection()
{
    class_< USearchDirection_TargetsFacingDirection, bases< USearchDirection >  , boost::noncopyable>("USearchDirection_TargetsFacingDirection", no_init)
        .def("StaticClass", &USearchDirection_TargetsFacingDirection::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}