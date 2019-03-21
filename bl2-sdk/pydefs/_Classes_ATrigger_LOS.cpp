#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ATrigger_LOS()
{
    class_< ATrigger_LOS, bases< ATrigger >  , boost::noncopyable>("ATrigger_LOS", no_init)
        .def_readwrite("PCsWithLOS", &ATrigger_LOS::PCsWithLOS)
        .def("StaticClass", &ATrigger_LOS::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventTick", &ATrigger_LOS::eventTick)
        .staticmethod("StaticClass")
  ;
}