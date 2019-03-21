#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAkSwitch()
{
    class_< UAkSwitch, bases< UAkObject >  , boost::noncopyable>("UAkSwitch", no_init)
        .def_readwrite("SwitchGroup", &UAkSwitch::SwitchGroup)
        .def("StaticClass", &UAkSwitch::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}