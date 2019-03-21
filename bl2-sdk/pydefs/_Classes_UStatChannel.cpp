#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UStatChannel()
{
    class_< UStatChannel, bases< UChannel >  , boost::noncopyable>("UStatChannel", no_init)
        .def_readonly("UnknownData00", &UStatChannel::UnknownData00)
        .def("StaticClass", &UStatChannel::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}