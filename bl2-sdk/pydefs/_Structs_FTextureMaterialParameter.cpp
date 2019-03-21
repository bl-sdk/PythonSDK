#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTextureMaterialParameter()
{
    class_< FTextureMaterialParameter >("FTextureMaterialParameter", no_init)
        .def_readwrite("Name", &FTextureMaterialParameter::Name)
        .def_readwrite("Value", &FTextureMaterialParameter::Value)
  ;
}