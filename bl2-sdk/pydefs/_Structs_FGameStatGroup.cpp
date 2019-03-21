#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGameStatGroup()
{
    class_< FGameStatGroup >("FGameStatGroup", no_init)
        .def_readwrite("Group", &FGameStatGroup::Group)
        .def_readwrite("Level", &FGameStatGroup::Level)
  ;
}