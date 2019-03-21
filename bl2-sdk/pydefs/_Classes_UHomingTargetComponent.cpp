#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UHomingTargetComponent()
{
    class_< UHomingTargetComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UHomingTargetComponent", no_init)
        .def_readwrite("SocketName", &USocketComponent::SocketName)
        .def("StaticClass", &UHomingTargetComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}