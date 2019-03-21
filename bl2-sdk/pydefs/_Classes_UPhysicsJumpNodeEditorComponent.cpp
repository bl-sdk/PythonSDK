#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPhysicsJumpNodeEditorComponent()
{
    class_< UPhysicsJumpNodeEditorComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UPhysicsJumpNodeEditorComponent", no_init)
        .def("StaticClass", &UPhysicsJumpNodeEditorComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}