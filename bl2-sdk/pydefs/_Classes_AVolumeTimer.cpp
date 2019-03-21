#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AVolumeTimer()
{
    class_< AVolumeTimer, bases< AInfo >  , boost::noncopyable>("AVolumeTimer", no_init)
        .def_readwrite("V", &AVolumeTimer::V)
        .def("StaticClass", &AVolumeTimer::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventTimer", &AVolumeTimer::eventTimer)
        .def("eventPostBeginPlay", &AVolumeTimer::eventPostBeginPlay)
        .staticmethod("StaticClass")
  ;
}