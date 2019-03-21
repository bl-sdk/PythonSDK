#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNxForceFieldRadialComponent()
{
    class_< UNxForceFieldRadialComponent, bases< UNxForceFieldComponent >  , boost::noncopyable>("UNxForceFieldRadialComponent", no_init)
        .def_readwrite("ForceStrength", &UNxForceFieldRadialComponent::ForceStrength)
        .def_readwrite("ForceRadius", &UNxForceFieldRadialComponent::ForceRadius)
        .def_readwrite("SelfRotationStrength", &UNxForceFieldRadialComponent::SelfRotationStrength)
        .def_readwrite("ForceFalloff", &UNxForceFieldRadialComponent::ForceFalloff)
        .def_readwrite("Kernel", &UNxForceFieldRadialComponent::Kernel)
        .def("StaticClass", &UNxForceFieldRadialComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}