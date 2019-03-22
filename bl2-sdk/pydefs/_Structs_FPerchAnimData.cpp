#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPerchAnimData(py::module &m)
{
    py::class_< FPerchAnimData >(m, "FPerchAnimData")
        .def_readwrite("Key", &FPerchAnimData::Key)
        .def_readwrite("StartAnim", &FPerchAnimData::StartAnim)
        .def_readwrite("StopAnim", &FPerchAnimData::StopAnim)
        .def_readwrite("IdleAnim", &FPerchAnimData::IdleAnim)
  ;
}