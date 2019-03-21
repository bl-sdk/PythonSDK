#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxAIMoveNodeRenderComponent()
{
    class_< UGearboxAIMoveNodeRenderComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UGearboxAIMoveNodeRenderComponent", no_init)
        .def("StaticClass", &UGearboxAIMoveNodeRenderComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}