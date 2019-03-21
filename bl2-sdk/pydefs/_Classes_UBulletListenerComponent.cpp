#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBulletListenerComponent()
{
    class_< UBulletListenerComponent, bases< UCylinderComponent >  , boost::noncopyable>("UBulletListenerComponent", no_init)
        .def_readwrite("OnBulletTouch", &UBulletListenerComponent::OnBulletTouch)
        .def("StaticClass", &UBulletListenerComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}