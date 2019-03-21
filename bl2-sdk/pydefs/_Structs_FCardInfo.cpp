#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCardInfo()
{
    class_< FCardInfo >("FCardInfo", no_init)
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