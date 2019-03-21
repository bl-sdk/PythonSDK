#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSpecialMoveValuePair()
{
    class_< FSpecialMoveValuePair >("FSpecialMoveValuePair", no_init)
        .def_readwrite("Key", &FSpecialMoveValuePair::Key)
        .def_readwrite("Value", &FSpecialMoveValuePair::Value)
  ;
}