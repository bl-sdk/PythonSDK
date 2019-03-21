#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UModelComponent()
{
    class_< UModelComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UModelComponent", no_init)
        .def_readwrite("Model", &UModelComponent::Model)
        .def_readwrite("ZoneIndex", &UModelComponent::ZoneIndex)
        .def_readwrite("ComponentIndex", &UModelComponent::ComponentIndex)
        .def_readwrite("Nodes", &UModelComponent::Nodes)
        .def_readwrite("Elements", &UModelComponent::Elements)
        .def("StaticClass", &UModelComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}