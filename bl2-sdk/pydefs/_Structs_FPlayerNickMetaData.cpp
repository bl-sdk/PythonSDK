#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPlayerNickMetaData()
{
    py::class_< FPlayerNickMetaData >("FPlayerNickMetaData")
        .def_readwrite("PlayerNickName", &FPlayerNickMetaData::PlayerNickName)
        .def_readwrite("PlayerNickColumnName", &FPlayerNickMetaData::PlayerNickColumnName)
  ;
}