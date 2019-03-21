#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UITinnitusTarget()
{
    class_< UITinnitusTarget, bases< UInterface >  , boost::noncopyable>("UITinnitusTarget", no_init)
        .def("StaticClass", &UITinnitusTarget::StaticClass, return_value_policy< reference_existing_object >())
        .def("TriggerTinnitus", &UITinnitusTarget::TriggerTinnitus)
        .def("TriggerTinnitusFromLocation", &UITinnitusTarget::TriggerTinnitusFromLocation)
        .staticmethod("StaticClass")
  ;
}