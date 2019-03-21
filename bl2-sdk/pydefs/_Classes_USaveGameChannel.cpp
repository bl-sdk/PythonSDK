#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USaveGameChannel()
{
    class_< USaveGameChannel, bases< UChannel >  , boost::noncopyable>("USaveGameChannel", no_init)
        .def_readonly("UnknownData00", &USaveGameChannel::UnknownData00)
        .def("StaticClass", &USaveGameChannel::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}