#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInputDeviceDefinition()
{
    class_< UInputDeviceDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UInputDeviceDefinition", no_init)
        .def_readwrite("Axes", &UInputDeviceDefinition::Axes)
        .def_readwrite("LookAxisDefinitions", &UInputDeviceDefinition::LookAxisDefinitions)
        .def_readwrite("Buttons", &UInputDeviceDefinition::Buttons)
        .def("StaticClass", &UInputDeviceDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}