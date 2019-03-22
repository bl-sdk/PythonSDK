#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPlayerNickMetaData(py::module &m)
{
    py::class_< FPlayerNickMetaData >(m, "FPlayerNickMetaData")
        .def_readwrite("PlayerNickName", &FPlayerNickMetaData::PlayerNickName)
        .def_readwrite("PlayerNickColumnName", &FPlayerNickMetaData::PlayerNickColumnName)
  ;
}