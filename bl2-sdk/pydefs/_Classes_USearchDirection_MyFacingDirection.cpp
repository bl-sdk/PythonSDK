#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USearchDirection_MyFacingDirection()
{
    class_< USearchDirection_MyFacingDirection, bases< USearchDirection >  , boost::noncopyable>("USearchDirection_MyFacingDirection", no_init)
        .def("StaticClass", &USearchDirection_MyFacingDirection::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}