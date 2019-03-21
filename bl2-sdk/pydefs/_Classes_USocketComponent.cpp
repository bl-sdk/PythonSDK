#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USocketComponent()
{
    class_< USocketComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("USocketComponent", no_init)
        .def_readwrite("SocketName", &USocketComponent::SocketName)
        .def("StaticClass", &USocketComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}