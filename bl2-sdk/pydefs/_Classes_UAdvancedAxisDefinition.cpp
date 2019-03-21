#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAdvancedAxisDefinition()
{
    class_< UAdvancedAxisDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UAdvancedAxisDefinition", no_init)
        .def_readwrite("Speed", &UAdvancedAxisDefinition::Speed)
        .def_readwrite("ZoomSpeed", &UAdvancedAxisDefinition::ZoomSpeed)
        .def_readwrite("DeadZone", &UAdvancedAxisDefinition::DeadZone)
        .def_readwrite("AccelThreshold", &UAdvancedAxisDefinition::AccelThreshold)
        .def_readwrite("AccelRate", &UAdvancedAxisDefinition::AccelRate)
        .def_readwrite("AccelSpeed", &UAdvancedAxisDefinition::AccelSpeed)
        .def_readwrite("AccelWarmup", &UAdvancedAxisDefinition::AccelWarmup)
        .def("StaticClass", &UAdvancedAxisDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}