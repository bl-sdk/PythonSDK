#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPhysicsJumpPreviewComponent()
{
    class_< UPhysicsJumpPreviewComponent, bases< UWillowPreviewComponent >  , boost::noncopyable>("UPhysicsJumpPreviewComponent", no_init)
        .def_readwrite("JumpNode", &UPhysicsJumpPreviewComponent::JumpNode)
        .def("StaticClass", &UPhysicsJumpPreviewComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}