#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCardInfo(py::module &m)
{
    py::class_< FCardInfo >(m, "FCardInfo")
        .def_readwrite("CardName", &FCardInfo::CardName)
        .def_readwrite("CellWidth", &FCardInfo::CellWidth)
        .def_readwrite("CellHeight", &FCardInfo::CellHeight)
        .def_readwrite("TextureWidth", &FCardInfo::TextureWidth)
        .def_readwrite("TextureHeight", &FCardInfo::TextureHeight)
        .def_readwrite("MainPlayerLinkageName", &FCardInfo::MainPlayerLinkageName)
        .def_readwrite("SplitPlayerLinkageName", &FCardInfo::SplitPlayerLinkageName)
        .def_readwrite("CompareSettings", &FCardInfo::CompareSettings)
  ;
}