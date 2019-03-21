#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSpecialMoveData()
{
    class_< FSpecialMoveData >("FSpecialMoveData", no_init)
        .def_readwrite("Data", &FSpecialMoveData::Data)
        .def_readwrite("PlayRateScale", &FSpecialMoveData::PlayRateScale)
        .def_readwrite("Duration", &FSpecialMoveData::Duration)
        .def_readwrite("CallbackName", &FSpecialMoveData::CallbackName)
        .def_readwrite("CallbackObject", &FSpecialMoveData::CallbackObject)
        .def_readwrite("SMD", &FSpecialMoveData::SMD)
  ;
}