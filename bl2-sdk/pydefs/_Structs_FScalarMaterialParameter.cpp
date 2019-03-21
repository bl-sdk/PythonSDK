#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FScalarMaterialParameter()
{
    class_< FScalarMaterialParameter >("FScalarMaterialParameter", no_init)
        .def_readwrite("Name", &FScalarMaterialParameter::Name)
        .def_readwrite("Value", &FScalarMaterialParameter::Value)
        .def_readwrite("ValueFromAttribute", &FScalarMaterialParameter::ValueFromAttribute)
  ;
}