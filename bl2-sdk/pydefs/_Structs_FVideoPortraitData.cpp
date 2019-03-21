#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVideoPortraitData()
{
    class_< FVideoPortraitData >("FVideoPortraitData", no_init)
        .def_readwrite("VideoMovie", &FVideoPortraitData::VideoMovie)
  ;
}