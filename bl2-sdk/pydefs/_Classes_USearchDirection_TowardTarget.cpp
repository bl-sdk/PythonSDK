#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USearchDirection_TowardTarget()
{
    class_< USearchDirection_TowardTarget, bases< USearchDirection >  , boost::noncopyable>("USearchDirection_TowardTarget", no_init)
        .def("StaticClass", &USearchDirection_TowardTarget::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}