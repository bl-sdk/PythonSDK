#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVectorMaterialInput()
{
    class_< FVectorMaterialInput, bases< FMaterialInput >  >("FVectorMaterialInput", no_init)
        .def_readwrite("Constant", &FVectorMaterialInput::Constant)
  ;
}