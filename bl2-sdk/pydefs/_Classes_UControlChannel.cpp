#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UControlChannel()
{
    class_< UControlChannel, bases< UChannel >  , boost::noncopyable>("UControlChannel", no_init)
        .def_readonly("UnknownData00", &UControlChannel::UnknownData00)
        .def("StaticClass", &UControlChannel::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}