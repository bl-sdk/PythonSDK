#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UClientBeaconAddressResolver()
{
    class_< UClientBeaconAddressResolver, bases< UObject >  , boost::noncopyable>("UClientBeaconAddressResolver", no_init)
        .def_readwrite("BeaconPort", &UClientBeaconAddressResolver::BeaconPort)
        .def_readwrite("BeaconName", &UClientBeaconAddressResolver::BeaconName)
        .def("StaticClass", &UClientBeaconAddressResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}