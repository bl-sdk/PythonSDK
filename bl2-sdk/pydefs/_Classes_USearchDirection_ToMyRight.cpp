#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USearchDirection_ToMyRight()
{
    class_< USearchDirection_ToMyRight, bases< USearchDirection >  , boost::noncopyable>("USearchDirection_ToMyRight", no_init)
        .def("StaticClass", &USearchDirection_ToMyRight::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}