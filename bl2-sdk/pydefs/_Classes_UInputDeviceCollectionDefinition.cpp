#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInputDeviceCollectionDefinition()
{
    class_< UInputDeviceCollectionDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UInputDeviceCollectionDefinition", no_init)
        .def_readwrite("XboxInputDevices", &UInputDeviceCollectionDefinition::XboxInputDevices)
        .def_readwrite("PS3InputDevices", &UInputDeviceCollectionDefinition::PS3InputDevices)
        .def_readwrite("PCInputDevices", &UInputDeviceCollectionDefinition::PCInputDevices)
        .def_readwrite("PCKeyBindGroups", &UInputDeviceCollectionDefinition::PCKeyBindGroups)
        .def("StaticClass", &UInputDeviceCollectionDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}