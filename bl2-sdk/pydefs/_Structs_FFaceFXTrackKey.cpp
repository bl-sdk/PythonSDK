#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FFaceFXTrackKey()
{
    class_< FFaceFXTrackKey >("FFaceFXTrackKey", no_init)
        .def_readwrite("StartTime", &FFaceFXTrackKey::StartTime)
        .def_readwrite("FaceFXGroupName", &FFaceFXTrackKey::FaceFXGroupName)
        .def_readwrite("FaceFXSeqName", &FFaceFXTrackKey::FaceFXSeqName)
  ;
}