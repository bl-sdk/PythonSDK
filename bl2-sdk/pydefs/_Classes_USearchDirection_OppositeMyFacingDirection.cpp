#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USearchDirection_OppositeMyFacingDirection()
{
    class_< USearchDirection_OppositeMyFacingDirection, bases< USearchDirection >  , boost::noncopyable>("USearchDirection_OppositeMyFacingDirection", no_init)
        .def("StaticClass", &USearchDirection_OppositeMyFacingDirection::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}