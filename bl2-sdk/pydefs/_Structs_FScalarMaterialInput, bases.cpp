#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FScalarMaterialInput()
{
    class_< FScalarMaterialInput, bases< FMaterialInput >  >("FScalarMaterialInput", no_init)
        .def_readwrite("Constant", &FScalarMaterialInput::Constant)
  ;
}