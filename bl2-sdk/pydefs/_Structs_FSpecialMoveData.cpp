#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSpecialMoveData(py::object m)
{
    py::class_< FSpecialMoveData >(m, "FSpecialMoveData")
        .def_readwrite("Data", &FSpecialMoveData::Data)
        .def_readwrite("PlayRateScale", &FSpecialMoveData::PlayRateScale)
        .def_readwrite("Duration", &FSpecialMoveData::Duration)
        .def_readwrite("CallbackName", &FSpecialMoveData::CallbackName)
        .def_readwrite("CallbackObject", &FSpecialMoveData::CallbackObject)
        .def_readwrite("SMD", &FSpecialMoveData::SMD)
  ;
}