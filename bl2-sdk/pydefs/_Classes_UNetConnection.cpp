#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNetConnection()
{
    class_< UNetConnection, bases< UPlayer >  , boost::noncopyable>("UNetConnection", no_init)
        .def_readonly("UnknownData00", &UNetConnection::UnknownData00)
        .def_readwrite("Children", &UNetConnection::Children)
        .def_readonly("UnknownData01", &UNetConnection::UnknownData01)
        .def("StaticClass", &UNetConnection::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}