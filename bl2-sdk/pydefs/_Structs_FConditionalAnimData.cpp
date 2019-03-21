#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FConditionalAnimData()
{
    class_< FConditionalAnimData >("FConditionalAnimData", no_init)
        .def_readwrite("Expression", &FConditionalAnimData::Expression)
        .def_readwrite("SpecialMove", &FConditionalAnimData::SpecialMove)
  ;
}