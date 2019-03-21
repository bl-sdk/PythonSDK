#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTranslationTrack()
{
    class_< FTranslationTrack >("FTranslationTrack", no_init)
        .def_readwrite("PosKeys", &FTranslationTrack::PosKeys)
        .def_readwrite("Times", &FTranslationTrack::Times)
  ;
}