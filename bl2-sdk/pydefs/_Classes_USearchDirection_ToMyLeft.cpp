#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USearchDirection_ToMyLeft()
{
    class_< USearchDirection_ToMyLeft, bases< USearchDirection >  , boost::noncopyable>("USearchDirection_ToMyLeft", no_init)
        .def("StaticClass", &USearchDirection_ToMyLeft::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}