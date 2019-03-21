#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AReplicationInfo()
{
    class_< AReplicationInfo, bases< AInfo >  , boost::noncopyable>("AReplicationInfo", no_init)
        .def("StaticClass", &AReplicationInfo::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}