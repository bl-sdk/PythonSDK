#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDesignerAttributeDefaultValueData()
{
    class_< FDesignerAttributeDefaultValueData >("FDesignerAttributeDefaultValueData", no_init)
        .def_readwrite("DesignerAttribute", &FDesignerAttributeDefaultValueData::DesignerAttribute)
        .def_readwrite("BaseValue", &FDesignerAttributeDefaultValueData::BaseValue)
  ;
}