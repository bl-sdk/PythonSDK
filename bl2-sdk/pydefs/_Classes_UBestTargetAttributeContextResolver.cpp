#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBestTargetAttributeContextResolver()
{
    class_< UBestTargetAttributeContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UBestTargetAttributeContextResolver", no_init)
        .def("StaticClass", &UBestTargetAttributeContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}