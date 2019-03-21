#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FNameExpressionData()
{
    class_< FNameExpressionData >("FNameExpressionData", no_init)
        .def_readwrite("Expressions", &FNameExpressionData::Expressions)
        .def_readwrite("PreModifier", &FNameExpressionData::PreModifier)
        .def_readwrite("PostModifier", &FNameExpressionData::PostModifier)
  ;
}