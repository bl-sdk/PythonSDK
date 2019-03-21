#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FUIMenuInputMap()
{
    class_< FUIMenuInputMap >("FUIMenuInputMap", no_init)
        .def_readwrite("FieldName", &FUIMenuInputMap::FieldName)
        .def_readwrite("Set", &FUIMenuInputMap::Set)
        .def_readwrite("MappedText", &FUIMenuInputMap::MappedText)
  ;
}