#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPerchAnimData()
{
    class_< FPerchAnimData >("FPerchAnimData", no_init)
        .def_readwrite("Key", &FPerchAnimData::Key)
        .def_readwrite("StartAnim", &FPerchAnimData::StartAnim)
        .def_readwrite("StopAnim", &FPerchAnimData::StopAnim)
        .def_readwrite("IdleAnim", &FPerchAnimData::IdleAnim)
  ;
}