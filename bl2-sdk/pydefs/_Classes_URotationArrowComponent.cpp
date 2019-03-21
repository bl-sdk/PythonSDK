#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_URotationArrowComponent()
{
    class_< URotationArrowComponent, bases< UArrowComponent >  , boost::noncopyable>("URotationArrowComponent", no_init)
        .def("StaticClass", &URotationArrowComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}