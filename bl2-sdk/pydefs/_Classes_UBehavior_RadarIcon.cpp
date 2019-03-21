#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_RadarIcon()
{
    class_< UBehavior_RadarIcon, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_RadarIcon", no_init)
        .def_readwrite("IconType", &UBehavior_RadarIcon::IconType)
        .def_readwrite("Action", &UBehavior_RadarIcon::Action)
        .def_readwrite("OverrideDuration", &UBehavior_RadarIcon::OverrideDuration)
        .def("StaticClass", &UBehavior_RadarIcon::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_RadarIcon::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}