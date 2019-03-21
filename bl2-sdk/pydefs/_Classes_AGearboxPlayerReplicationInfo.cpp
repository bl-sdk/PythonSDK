#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AGearboxPlayerReplicationInfo()
{
    class_< AGearboxPlayerReplicationInfo, bases< APlayerReplicationInfo >  , boost::noncopyable>("AGearboxPlayerReplicationInfo", no_init)
        .def_readwrite("Difficulty", &AGearboxPlayerReplicationInfo::Difficulty)
        .def_readwrite("Dummy", &AGearboxPlayerReplicationInfo::Dummy)
        .def("StaticClass", &AGearboxPlayerReplicationInfo::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}