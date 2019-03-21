#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USequenceVariable()
{
    class_< USequenceVariable, bases< USequenceObject >  , boost::noncopyable>("USequenceVariable", no_init)
        .def_readwrite("VarName", &USequenceVariable::VarName)
        .def_readwrite("OptionalAttributeDefinition", &USequenceVariable::OptionalAttributeDefinition)
        .def("StaticClass", &USequenceVariable::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}