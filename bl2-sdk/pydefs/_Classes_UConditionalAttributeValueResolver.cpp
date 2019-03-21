#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UConditionalAttributeValueResolver()
{
    class_< UConditionalAttributeValueResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("UConditionalAttributeValueResolver", no_init)
        .def_readwrite("ValueExpressions", &UConditionalAttributeValueResolver::ValueExpressions)
        .def("StaticClass", &UConditionalAttributeValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}