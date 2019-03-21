#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULookAxisDefinition()
{
    class_< ULookAxisDefinition, bases< UGBXDefinition >  , boost::noncopyable>("ULookAxisDefinition", no_init)
        .def_readwrite("Speed", &ULookAxisDefinition::Speed)
        .def_readwrite("ZoomSpeed", &ULookAxisDefinition::ZoomSpeed)
        .def_readwrite("AccelThreshold", &ULookAxisDefinition::AccelThreshold)
        .def_readwrite("AccelRate", &ULookAxisDefinition::AccelRate)
        .def_readwrite("AccelSpeed", &ULookAxisDefinition::AccelSpeed)
        .def_readwrite("AccelWarmup", &ULookAxisDefinition::AccelWarmup)
        .def("StaticClass", &ULookAxisDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}