#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAttributeModifier()
{
    class_< UAttributeModifier, bases< UObject >  , boost::noncopyable>("UAttributeModifier", no_init)
        .def_readwrite("Type", &UAttributeModifier::Type)
        .def_readwrite("Value", &UAttributeModifier::Value)
        .def("StaticClass", &UAttributeModifier::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}