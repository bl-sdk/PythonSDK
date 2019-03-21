#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDrawCylinderComponent()
{
    class_< UDrawCylinderComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UDrawCylinderComponent", no_init)
        .def_readwrite("CylinderColor", &UDrawCylinderComponent::CylinderColor)
        .def_readwrite("CylinderMaterial", &UDrawCylinderComponent::CylinderMaterial)
        .def_readwrite("CylinderRadius", &UDrawCylinderComponent::CylinderRadius)
        .def_readwrite("CylinderTopRadius", &UDrawCylinderComponent::CylinderTopRadius)
        .def_readwrite("CylinderHeight", &UDrawCylinderComponent::CylinderHeight)
        .def_readwrite("CylinderHeightOffset", &UDrawCylinderComponent::CylinderHeightOffset)
        .def_readwrite("CylinderSides", &UDrawCylinderComponent::CylinderSides)
        .def("StaticClass", &UDrawCylinderComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}