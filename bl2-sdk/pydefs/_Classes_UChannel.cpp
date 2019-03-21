#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UChannel()
{
    class_< UChannel, bases< UObject >  , boost::noncopyable>("UChannel", no_init)
        .def_readonly("UnknownData00", &UChannel::UnknownData00)
        .def("StaticClass", &UChannel::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}