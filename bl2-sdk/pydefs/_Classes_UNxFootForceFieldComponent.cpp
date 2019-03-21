#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNxFootForceFieldComponent()
{
    class_< UNxFootForceFieldComponent, bases< UNxForceFieldRadialComponent >  , boost::noncopyable>("UNxFootForceFieldComponent", no_init)
        .def("StaticClass", &UNxFootForceFieldComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}