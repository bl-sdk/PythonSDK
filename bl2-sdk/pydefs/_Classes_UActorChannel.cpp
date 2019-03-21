#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorChannel()
{
    class_< UActorChannel, bases< UChannel >  , boost::noncopyable>("UActorChannel", no_init)
        .def_readonly("UnknownData00", &UActorChannel::UnknownData00)
        .def("StaticClass", &UActorChannel::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}