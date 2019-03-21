#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USearchDirection_RandomLeftOrRight()
{
    class_< USearchDirection_RandomLeftOrRight, bases< USearchDirection >  , boost::noncopyable>("USearchDirection_RandomLeftOrRight", no_init)
        .def("StaticClass", &USearchDirection_RandomLeftOrRight::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}