#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FItemCardInfo()
{
    class_< FItemCardInfo >("FItemCardInfo", no_init)
        .def_readwrite("CardName", &FItemCardInfo::CardName)
        .def_readwrite("ContentIdx", &FItemCardInfo::ContentIdx)
        .def_readwrite("ItemCard", &FItemCardInfo::ItemCard)
  ;
}