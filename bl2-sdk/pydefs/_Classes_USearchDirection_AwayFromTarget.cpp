#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USearchDirection_AwayFromTarget()
{
    class_< USearchDirection_AwayFromTarget, bases< USearchDirection >  , boost::noncopyable>("USearchDirection_AwayFromTarget", no_init)
        .def("StaticClass", &USearchDirection_AwayFromTarget::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}