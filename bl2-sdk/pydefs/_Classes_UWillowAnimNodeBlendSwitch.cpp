#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeBlendSwitch()
{
    class_< UWillowAnimNodeBlendSwitch, bases< UAnimNodeBlendList >  , boost::noncopyable>("UWillowAnimNodeBlendSwitch", no_init)
        .def_readwrite("BlendTime", &UWillowAnimNodeBlendSwitch::BlendTime)
        .def_readwrite("ChildSwitches", &UWillowAnimNodeBlendSwitch::ChildSwitches)
        .def_readwrite("CurrentSwitch", &UWillowAnimNodeBlendSwitch::CurrentSwitch)
        .def_readwrite("DesiredSwitch", &UWillowAnimNodeBlendSwitch::DesiredSwitch)
        .def_readwrite("DefaultSwitch", &UWillowAnimNodeBlendSwitch::DefaultSwitch)
        .def("StaticClass", &UWillowAnimNodeBlendSwitch::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetCurrentSwitch", &UWillowAnimNodeBlendSwitch::SetCurrentSwitch)
        .staticmethod("StaticClass")
  ;
}