#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTcpNetDriver()
{
    class_< UTcpNetDriver, bases< UNetDriver >  , boost::noncopyable>("UTcpNetDriver", no_init)
        .def_readonly("UnknownData00", &UTcpNetDriver::UnknownData00)
        .def("StaticClass", &UTcpNetDriver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}