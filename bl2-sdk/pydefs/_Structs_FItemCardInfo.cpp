#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FItemCardInfo()
{
    py::class_< FItemCardInfo >("FItemCardInfo")
        .def_readwrite("CardName", &FItemCardInfo::CardName)
        .def_readwrite("ContentIdx", &FItemCardInfo::ContentIdx)
        .def_readwrite("ItemCard", &FItemCardInfo::ItemCard)
  ;
}