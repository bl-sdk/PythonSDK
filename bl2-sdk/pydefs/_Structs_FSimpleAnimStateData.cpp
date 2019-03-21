#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSimpleAnimStateData()
{
    class_< FSimpleAnimStateData >("FSimpleAnimStateData", no_init)
        .def_readwrite("AnimState", &FSimpleAnimStateData::AnimState)
  ;
}