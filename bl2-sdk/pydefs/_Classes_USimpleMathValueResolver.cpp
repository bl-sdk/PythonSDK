#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USimpleMathValueResolver()
{
    class_< USimpleMathValueResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("USimpleMathValueResolver", no_init)
        .def_readwrite("Arg1Option", &USimpleMathValueResolver::Arg1Option)
        .def_readwrite("Operand", &USimpleMathValueResolver::Operand)
        .def_readwrite("Arg1Attribute", &USimpleMathValueResolver::Arg1Attribute)
        .def_readwrite("Argument", &USimpleMathValueResolver::Argument)
        .def("StaticClass", &USimpleMathValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}