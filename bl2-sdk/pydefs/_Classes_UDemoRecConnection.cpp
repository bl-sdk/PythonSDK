#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDemoRecConnection()
{
    class_< UDemoRecConnection, bases< UNetConnection >  , boost::noncopyable>("UDemoRecConnection", no_init)
        .def("StaticClass", &UDemoRecConnection::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}