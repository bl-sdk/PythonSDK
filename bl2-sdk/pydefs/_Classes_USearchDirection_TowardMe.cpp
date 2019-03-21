#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USearchDirection_TowardMe()
{
    class_< USearchDirection_TowardMe, bases< USearchDirection >  , boost::noncopyable>("USearchDirection_TowardMe", no_init)
        .def("StaticClass", &USearchDirection_TowardMe::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}