#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UScriptStruct()
{
    class_< UScriptStruct, bases< UStruct >  , boost::noncopyable>("UScriptStruct", no_init)
        .def_readonly("UnknownData00", &UScriptStruct::UnknownData00)
        .def("StaticClass", &UScriptStruct::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}