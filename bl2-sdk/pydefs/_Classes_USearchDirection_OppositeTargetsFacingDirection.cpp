#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USearchDirection_OppositeTargetsFacingDirection()
{
    class_< USearchDirection_OppositeTargetsFacingDirection, bases< USearchDirection >  , boost::noncopyable>("USearchDirection_OppositeTargetsFacingDirection", no_init)
        .def("StaticClass", &USearchDirection_OppositeTargetsFacingDirection::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}