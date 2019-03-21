#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVector2MaterialInput()
{
    class_< FVector2MaterialInput, bases< FMaterialInput >  >("FVector2MaterialInput", no_init)
        .def_readwrite("ConstantX", &FVector2MaterialInput::ConstantX)
        .def_readwrite("ConstantY", &FVector2MaterialInput::ConstantY)
  ;
}