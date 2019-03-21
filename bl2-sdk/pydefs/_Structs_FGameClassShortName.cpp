#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGameClassShortName()
{
    class_< FGameClassShortName >("FGameClassShortName", no_init)
        .def_readwrite("ShortName", &FGameClassShortName::ShortName)
        .def_readwrite("GameClassName", &FGameClassShortName::GameClassName)
  ;
}