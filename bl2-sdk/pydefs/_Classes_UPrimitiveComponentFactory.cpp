#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPrimitiveComponentFactory()
{
    class_< UPrimitiveComponentFactory, bases< UObject >  , boost::noncopyable>("UPrimitiveComponentFactory", no_init)
        .def("StaticClass", &UPrimitiveComponentFactory::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}