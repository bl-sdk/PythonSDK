#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FStateAttributeData()
{
    class_< FStateAttributeData >("FStateAttributeData", no_init)
        .def_readwrite("Key", &FStateAttributeData::Key)
        .def_readwrite("Attribute", &FStateAttributeData::Attribute)
  ;
}