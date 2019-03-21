#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNoContextNeededAttributeContextResolver()
{
    class_< UNoContextNeededAttributeContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UNoContextNeededAttributeContextResolver", no_init)
        .def("StaticClass", &UNoContextNeededAttributeContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}