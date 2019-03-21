#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FtMenuData()
{
    class_< FtMenuData >("FtMenuData", no_init)
        .def_readwrite("ColumnText", &FtMenuData::ColumnText)
        .def_readwrite("PrimaryActionCmd", &FtMenuData::PrimaryActionCmd)
        .def_readwrite("SecondaryActionCmd", &FtMenuData::SecondaryActionCmd)
        .def_readwrite("TertiaryActionCmd", &FtMenuData::TertiaryActionCmd)
        .def_readwrite("QuaternaryActionCmd", &FtMenuData::QuaternaryActionCmd)
        .def_readwrite("QuinaryActionCmd", &FtMenuData::QuinaryActionCmd)
        .def_readwrite("OverCmd", &FtMenuData::OverCmd)
        .def_readwrite("LeaveCmd", &FtMenuData::LeaveCmd)
        .def_readwrite("Data", &FtMenuData::Data)
        .def_readwrite("HintFontSize", &FtMenuData::HintFontSize)
        .def_readwrite("Hint", &FtMenuData::Hint)
        .def_readwrite("ItemDetail", &FtMenuData::ItemDetail)
        .def_readwrite("DescriptionBoxStr", &FtMenuData::DescriptionBoxStr)
  ;
}