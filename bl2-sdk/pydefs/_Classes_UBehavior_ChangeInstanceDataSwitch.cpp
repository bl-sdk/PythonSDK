#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeInstanceDataSwitch()
{
    class_< UBehavior_ChangeInstanceDataSwitch, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ChangeInstanceDataSwitch", no_init)
        .def_readwrite("SwitchName", &UBehavior_ChangeInstanceDataSwitch::SwitchName)
        .def_readwrite("NewValue", &UBehavior_ChangeInstanceDataSwitch::NewValue)
        .def("StaticClass", &UBehavior_ChangeInstanceDataSwitch::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ChangeInstanceDataSwitch::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}