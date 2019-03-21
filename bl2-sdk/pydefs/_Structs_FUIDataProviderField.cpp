#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FUIDataProviderField()
{
    class_< FUIDataProviderField >("FUIDataProviderField", no_init)
        .def_readwrite("FieldTag", &FUIDataProviderField::FieldTag)
        .def_readwrite("FieldType", &FUIDataProviderField::FieldType)
        .def_readwrite("FieldProviders", &FUIDataProviderField::FieldProviders)
  ;
}