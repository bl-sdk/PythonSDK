#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetCompassIcon()
{
    class_< UBehavior_SetCompassIcon, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetCompassIcon", no_init)
        .def_readwrite("CompassIcon", &UBehavior_SetCompassIcon::CompassIcon)
        .def("StaticClass", &UBehavior_SetCompassIcon::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetCompassIcon::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}