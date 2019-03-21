#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerStatAttributeValueResolver()
{
    class_< UPlayerStatAttributeValueResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("UPlayerStatAttributeValueResolver", no_init)
        .def_readwrite("StatName", &UPlayerStatAttributeValueResolver::StatName)
        .def("StaticClass", &UPlayerStatAttributeValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}