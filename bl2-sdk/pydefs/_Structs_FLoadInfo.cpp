#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLoadInfo()
{
    class_< FLoadInfo >("FLoadInfo", no_init)
        .def_readwrite("CharacterData", &FLoadInfo::CharacterData)
  ;
}