#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTcpipConnection()
{
    class_< UTcpipConnection, bases< UNetConnection >  , boost::noncopyable>("UTcpipConnection", no_init)
        .def_readonly("UnknownData00", &UTcpipConnection::UnknownData00)
        .def("StaticClass", &UTcpipConnection::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}