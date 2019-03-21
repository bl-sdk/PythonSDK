#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFileChannel()
{
    class_< UFileChannel, bases< UChannel >  , boost::noncopyable>("UFileChannel", no_init)
        .def_readonly("UnknownData00", &UFileChannel::UnknownData00)
        .def("StaticClass", &UFileChannel::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}