#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UChildConnection()
{
    class_< UChildConnection, bases< UNetConnection >  , boost::noncopyable>("UChildConnection", no_init)
        .def_readwrite("Parent", &UChildConnection::Parent)
        .def("StaticClass", &UChildConnection::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}