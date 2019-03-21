#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerClassAttributeValueResolver()
{
    class_< UPlayerClassAttributeValueResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("UPlayerClassAttributeValueResolver", no_init)
        .def_readwrite("PlayerClassId", &UPlayerClassAttributeValueResolver::PlayerClassId)
        .def("StaticClass", &UPlayerClassAttributeValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}