#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVectorMaterialParameter()
{
    class_< FVectorMaterialParameter >("FVectorMaterialParameter", no_init)
        .def_readwrite("Name", &FVectorMaterialParameter::Name)
        .def_readwrite("Value", &FVectorMaterialParameter::Value)
        .def_readwrite("VectorScale", &FVectorMaterialParameter::VectorScale)
  ;
}