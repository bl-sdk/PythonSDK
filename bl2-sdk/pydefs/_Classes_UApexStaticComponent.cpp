#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UApexStaticComponent()
{
    class_< UApexStaticComponent, bases< UApexComponentBase >  , boost::noncopyable>("UApexStaticComponent", no_init)
        .def("StaticClass", &UApexStaticComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}